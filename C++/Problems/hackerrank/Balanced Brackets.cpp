#include <iostream>
#include <stack>
#include <vector>

using namespace std;

string balancedBrackets(string &que){
    string finalAns="NO";
    stack<char> stackCheck;
    stackCheck.push('$');
    int i;
    for(i = 0 ;i< que.length();i++){
        if(que[i] == '('||que[i] == '{'||que[i] == '['){
            stackCheck.push(que[i]);
        }else{
            if( que[i]==')' && stackCheck.top()=='(')
                stackCheck.pop();
            else if( que[i]=='}' && stackCheck.top()=='{')
                stackCheck.pop();
            else if( que[i]==']' && stackCheck.top()=='[')
                stackCheck.pop();
            else break;
        }
    }

    if(i== que.length() && stackCheck.top()=='$'){
        finalAns="YES";
    }
    return finalAns;
}

int main()
{   
    // int n;
    
//     cin>>n;
//     vector<string> que(n);
//     for(int i =0 ;i<n+1 ;i++){
//     cin>>que[i];
//     }
//     for(auto s:que)
    string s;
    cin>>s;

        cout<<balancedBrackets(s)<<endl;
    return 0;
}
