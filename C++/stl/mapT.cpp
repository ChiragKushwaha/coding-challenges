#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, int> ages;
    ages.insert(make_pair(2,1));
    ages.insert(make_pair(4,3));
    ages.insert(make_pair(1,6));
    ages.insert(make_pair(6,1));
    ages.insert(make_pair(6,5));
    ages.insert(make_pair(8,6));
    ages.insert(make_pair(0,2));
    ages.insert(make_pair(0,0));
    for(auto a : ages){
        pair<int, int> p =a;
        cout<<p.first<<" "<<p.second<<endl;
    }

return 0;
}