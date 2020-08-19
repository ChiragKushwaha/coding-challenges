#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr = {3,5,2,-1,34,-22,7,8,-9,10};
    int key = 1,flag=1;
    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if(arr[i]+arr[j]== key){
                cout<<"Number found\n";
                flag=0;
                break;
            }
        }
        if (!flag)
        {
            break;
        }
        
        
    }
    if (flag)
    {
        cout<<"Number not found";
    }
    
    
    return 0;
}