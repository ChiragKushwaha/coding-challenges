#include<iostream>
#include<map>
#include<vector>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{int n=3;
    // for (int i = 0; i < (int) pow(2, n); i++) 
    // { 
    //     // consider each element in the set 
    //     for (int j = 0; j < n; j++) 
    //     { 
    //         // Check if jth bit in the i is set. If the bit 
    //         // is set, we consider jth element from set 
    //        cout<<i<<"   "<< j<<"   "<<(1 << j)<<"   "<< (i & (1 << j))<<endl; 
                
    //     } 
    //     cout<<".................\n";
    // }
  
    // vector<int> a={1,2,3,4,3,1,8,67,6,5,65};
    // map<int,bool> m;

    // for(int e:a){
    // if(!m[e]){
    // m[e]=true;
    // cout<<e<< endl;}else cout<<e<<"repeated"<<endl;
    // }
    //     if(t==m.end())
    //     cout<<"end"<<endl;
    // else cout<<"not end"<<endl;
    // for(auto e:m)
    // cout<<e.first<<"  "<<e.second<<endl;
    cout<<(1<<2)<<endl;
    cout<<(2&2)<<endl;
    return 0;
}
