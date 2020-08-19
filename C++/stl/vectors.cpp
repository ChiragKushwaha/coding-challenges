#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector<string> strings(5);
    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    strings.push_back("four");

    // strings[3] = "dog";

    // cout<<strings[3]<<endl;
    // cout<<strings.size()<<endl;
    
    
    // for (int i = 0; i < strings.size(); i++)
    // {   
    //     cout<<strings[i]<<endl;
    // }
    
    // for(vector<string>::iterator it= strings.begin(); it != strings.end();it++){
    //     cout<<*it<<endl;
    // }
    
    // vector<string>::iterator it= strings.begin();
    // it +=2;
    // cout<<*it<<endl;


    // for(auto it : strings){
    //     cout<<it<<endl;
    // }


    vector<double> numbers(0);

    cout<<"Size: "<<numbers.size()<<endl;

    int capacity = numbers.capacity();
    cout<<"Capacity: "<<capacity<<endl;

    for(int i=0;i<10000;i++){
        if(numbers.capacity()!=capacity){
            capacity=numbers.capacity();
            cout<<"Capacity: "<<capacity<<endl;

        }
        numbers.push_back(i);
    }
    numbers.reserve(100);
    cout<<numbers[2]<<endl;
    cout<<"Size: "<<numbers.size()<<endl;
    cout<<"Capacity: "<<numbers.capacity()<<endl;

    return 0;
}
