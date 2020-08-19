#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


string helpfulMaths(string &que){
    vector<char>ans;
    string finalAns="";
    if(que.length() == 1){
        finalAns = que;
    }else{
        for(int i =0;i<que.length();i+=2){
            ans.push_back(que[i]);
        }
        sort(ans.begin(), ans.end());
        for(int i=0;i<ans.size();i++){
            finalAns += ans[i] ;
            if(i < ans.size()-1) finalAns+= "+";
        }
    }
    return finalAns;
}

int main(){
    string que;

    cin>>que;
  
    cout<<helpfulMaths(que);
    return 0;
}