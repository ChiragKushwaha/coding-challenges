#include<iostream>
#include<list>

using namespace std;

void generateParentheses(string ans,list<string> &finalAns, int numberOfLeftParantheses, int numberOfRightParantheses){
    
    //this condition means that you have reached the leaf nodes and have exhausted all the left and right prananthese
    //so simply append the ans to the final ans
    if (numberOfLeftParantheses == 0 && numberOfRightParantheses == 0)
    {   finalAns.push_back(ans);
        return ;
    }

    //check that the number of left parantheses are greater than zero or not because if we have no left parantheses no need to make a 
    //recursive call
    if (numberOfLeftParantheses > 0){
        generateParentheses(ans+"(", finalAns, numberOfLeftParantheses-1, numberOfRightParantheses);
    }

    //likewise it checks that the left parantheses are always less than right paranthese ((( 3 left parantheses and  )) 2 right parantheses
    // your answer will get wrong as one opening parantheses remains unclosed , so this condition must be satisfied
    if(numberOfLeftParantheses < numberOfRightParantheses){
        generateParentheses(ans+")", finalAns, numberOfLeftParantheses, numberOfRightParantheses-1);
    }
}

//basically starts the function that's it by callling the original function, you can say it as a kick starter function of recursion
list<string> solveProblem(int numberOfParantheses){
    list<string> finalAns;
    generateParentheses("", finalAns, numberOfParantheses, numberOfParantheses);
    return finalAns;
}

int main()
{
    list<string> finalAns = solveProblem(3);
    for(auto ans : finalAns)   
        cout<<ans<<endl;
    
    return 0;
}
