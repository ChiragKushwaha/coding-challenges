#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ifstream input;

    string fileName ="stats.txt";

    input.open(fileName);

    if (input.is_open())
    {
        while (input)
        {   string line;
            getline(input, line,':');
            
            int population;
            input >> population;

            input.get();

            if(!input){
                break;
            }

            cout<<line<<" -- "<<population<<endl;

        }
        
        input.close();
    }
    else
    {
        cout<<"Could not create file: "<<fileName<<endl;
    }
    
    return 0;
}