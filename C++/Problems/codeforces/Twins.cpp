#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
bool maxC(int a, int b){
    return a>b;
    }
int main(){
    int n ;
    cin>>n;
    int total=0;
    vector<int> arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i];
        total += arr[i];
    }
    sort(arr.begin(), arr.end(), maxC);
    int strictGT= total/2;
    // int ans = 0;
    for(int i =1;i<n;i++){
        
            arr[i]=arr[i]+arr[i-1];
    }
    auto u = upper_bound(arr.begin(), arr.end(), strictGT);
    
    cout<<(u - arr.begin())+1<<endl;
    

   
    return 0;
}