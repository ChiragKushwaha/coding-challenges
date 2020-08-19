#include<bits/stdc++.h> 
using namespace std; 
  

string subString(string s)  
{   
    // vector<string> ans;
    string ans="";
    for (int i = 0; i < s.size(); i++)  
        for (int len = 1; len <= s.size() - i; len++){ 
           string temp =s.substr(i, len);
           if(ans < temp)
                ans=temp;
        }
    // sort(ans.begin(), ans.end());
    // return ans[ans.size()-1];
    return ans; 
} 
int main()  
{ 
    string s = "abaca"; 
    cout<<subString(s); 
    return 0; 
}