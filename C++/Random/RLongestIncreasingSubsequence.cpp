// #include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;

vector<int> LIS(int arr[], int size){
    
    vector<vector<int>> ans(size);
    ans[0].push_back(arr[0]);
    for(int i=1;i<size;i++){
        for(int j=0;j<i;j++){
            // 3,2,6,4,5
            if((arr[j]<arr[i]) && (ans[i].size() < ans[j].size()+1)){ 
                cout<<i<<"  "<<"ans[i] iiiii ";
                for(auto a:ans[i])
            cout<<a<<" ";cout<<endl;
                cout<<j<<"  "<<"ans[j]  ";
                for(auto a:ans[j])
            cout<<a<<" ";cout<<endl;
                ans[i]=ans[j];
                }
            }
        ans[i].push_back(arr[i]);
        cout<<i<<"  "<<"ans[i] -- i -- ";
                for(auto a:ans[i])
            cout<<a<<" ";cout<<endl;
            cout<<".................."<<endl;
    }
    vector<int> max = ans[0]; 

    for (vector<int> x : ans){ 
        for(auto a:x)
            cout<<a<<" ";cout<<endl;
        if (x.size() > max.size()) 
            max = x; 
    }
return max;
}

int main(){
    int arr[]={3,2,6,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans = LIS(arr, size);
    for(auto e: ans)cout<<e<<" ";
    cout<<endl;
    // cout<<LIS(arr,size)<<endl;
    
    return 0;
}