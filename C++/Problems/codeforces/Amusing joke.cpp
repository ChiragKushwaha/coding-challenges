#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    bool flag = false;
    unordered_map<char, int> map;
    for(char c :s1){
        map[c]++;
    }
    for(char c :s2){
        map[c]++;
    }
    for(char c :s3){
        map[c]--;
    }
    for(auto c:map){
        if(c.second){
            flag=true;
        }
    }
    if(!flag){
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    

    return 0;
}
