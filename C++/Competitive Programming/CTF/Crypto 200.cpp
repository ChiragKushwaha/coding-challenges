#include<cstdio>
#include<vector>
#include<iostream>

using namespace  std;

// int threeToTen(int num){
//     int ans= 0,i=0;
//     while(num >0){
//         int r= num%10;
//         ans = ans + (r*pow(3,i));
//         num= num/10;
//         i++;
//     }
//     return ans;
// }
int main(){
    const char code[247] = "22 12 200 12 1000 212 12 1000 210 201 12 1000 202 12 200 112 1 200 221 1000 202 120 1000 21 12 202 1000 202 22 12 1000 20 110 1 21 1000 202 22 200 12 12 1001 11 100 21 100 202 201 1001 100 201 112 202 1001 211 12 200 221 1001 201 12 10 210 200 12";
    string number ="";
    vector<string> arr;
    for(int i=0;code[i]!='\0';i++){
       
        if (code[i] == ' ')
        {
            arr.push_back(number);
            number="";
        } 
        number+=code[i];
   
        
    }
    arr.push_back(number);
    for(auto a: arr)
    printf("%s ", a);
    // for(int i=0;i<results.size();i++){
    //     printf("%c ",arr[i]+96);
    // }

  return 0;  
} 