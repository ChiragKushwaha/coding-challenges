#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> ages;

    pair<string, int> addToMap("Peter", 100);
    ages.insert(addToMap);
    ages.insert(pair<string,int>("Insert", 199));

    ages.insert(make_pair("make pair", 688));

    ages["Mike"]=40;
    ages["Raj"]=20;
    ages["Vicky"]=30;

    ages["Mike"]=70;

    cout<<ages["Raj"]<<endl;

    cout<< ages["Sue"]<<endl;
    if(ages.find("Vicky")!= ages.end()){
        cout<<"Found Vicky"<<endl;
    }else{
        cout<<"Key not found"<<endl;
    }
    
    for(map<string, int>::iterator it=ages.begin(); it!=ages.end(); it++){
        pair<string, int> age =*it;
        cout<<age.first <<": "<<age.second<<endl;
    }
    
    for(map<string, int>::iterator it=ages.begin(); it!=ages.end(); it++){
        cout<<it->first <<": "<<it->second<<endl;
    }
    return 0;
}