#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    fstream inFile;

    string inFileName = "text.txt";

    inFile.open(inFileName, ios::in);

    if(inFile.is_open()){

        string line;

        // inFile >> line;
        // while (! inFile.eof())
        while (inFile)  
        {
            getline(inFile, line);
            cout<<line<<endl;
        }
        
        inFile.close();
    }else
    {
        cout<<"Cannot open file: "<<inFileName<<endl;
    }
    

}