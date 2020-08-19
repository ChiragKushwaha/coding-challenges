#include<iostream>
#include<vector>

using namespace std;
int LIS(int arr, int size){
    int maximum_ending_here=0;
    // 3,2,6,4,5
    int maximum_so_far=-1;
    for(int i=0;i<size;i++){
        if(arr[i]<arr[i+1])
            maximum_ending_here+=1;
        if(maximum_so_far < maximum_ending_here){
            maximum_so_far = maximum_ending_here;
        }
    }
}
int main(){
    int arr[]={3,2,6,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // vector<int> ans = LIS(arr, size);
    // for(auto e: ans)cout<<e<<" ";
    // cout<<endl;
   cout<<LIS(arr,size)<<endl;
    return 0;
}