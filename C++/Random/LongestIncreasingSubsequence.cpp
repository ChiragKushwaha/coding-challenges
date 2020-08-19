#include<iostream>

using namespace std;

int  LIS(int arr[], int size){
    int lookup[size];
    lookup[0]=1;
    for(int i=0;i<size;i++){
        lookup[i]=1;
        for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[i] && (lookup[j]+1>lookup[i])){ 
                    lookup[i] = lookup[j]+1 ;
            }
    }
    
    }
return lookup[size-1];
}

int main(){
    int arr[]={3, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<LIS(arr,size)<<endl;
    
    return 0;
}