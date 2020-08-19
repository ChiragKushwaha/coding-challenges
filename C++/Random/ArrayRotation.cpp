#include<iostream>
#include <cmath>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int gcd(int a, int b) 
{  
    return (b==0)? a:gcd(b, a % b); 
} 
// void swap(int arr[],int s,int sf){
//     int temp=arr[s];
//     arr[s]=arr[sf];
//     arr[sf]=temp;
// }
void leftRotate(int arr[], int c, int n){
        int g_c_d = gcd(c,n);
        cout<<g_c_d<<endl;
        for(int i =0;i<g_c_d;i++){
            int temp = arr[i];
            int j=i;
    cout<<"new loop"<<endl;
            while (1)
            {
                int k=j+c;
                cout<<"1. k  "<<k<<"  j  "<<j<<"  n  "<<n<<endl;
                if(k>=n)
                    k=k-n;
                if(k==i)
                    break;
                
                cout<<"2. k  "<<k<<"  j  "<<j<<endl;
                arr[j]=arr[k];
                j=k;
            }
            arr[j]=temp;
            
        }
}

int main(){  //0  1  2  3  4  5  6  7
    int arr[]={1, 2, 3, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    leftRotate(arr, 6, n);
    printArray(arr, n);
    return 0;
}