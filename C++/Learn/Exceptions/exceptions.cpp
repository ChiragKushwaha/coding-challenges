#include <iostream>
using namespace std;
void mightGoWrong();
void usesMightGoWrong(){
    mightGoWrong();
}
void mightGoWrong(){

    bool error1 = false;
    bool error2 = true;
    if(error1){
        throw "Something went wrong";
    }
    if (error2)
    {
        throw string("Something else went wrong.");
    }
    
}

int main(){
    try{
    usesMightGoWrong();
    }
    catch(int e){
        cout<<"Error code: "<<e<<endl;
    }
    catch(char const *e){
        cout<<"Error message: "<<e<<endl;
    }
    catch(string &e){
        cout<<"sting error message: "<<e<<endl;
    }
    cout<<"Still running"<<endl;
    return 0;
}