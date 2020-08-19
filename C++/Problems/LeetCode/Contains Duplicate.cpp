#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>

using namespace std;

string containsDuplicate(vector<int> &A){
   /* unordered_set<int> C( A.begin(), A.end());
    if(C.size() != A.size()) return "true";
    return "false";
    */
   sort(A.begin(),A.end());
   for(int i=0;i<A.size()-1;i++){
       if(A[i]==A[i+1]) return "true"; 
   }
   return "false";
}

int main(){
    int n;
    cin>>n;
    vector<int>que(n);
    for(int i=0;i<n;i++)
        cin>>que[i];

    cout<<containsDuplicate(que)<<endl;
    return 0;
}