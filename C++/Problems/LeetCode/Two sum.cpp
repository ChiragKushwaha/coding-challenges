#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int> numbers, int target){
    int ap=0;
    int bp=numbers.size();

    while(ap < bp){
        int sum = numbers[ap] + numbers[bp];

        if (sum > target)
        {
            bp--;
        }else if(sum< target){
            ap++;
        }
        else{
            return vector<int> {ap,bp};
        }
        
    }return vector<int> {ap, bp};
}

int main(){
    vector<int> a = {1,2,3,5,8};
    vector<int> ans = twoSum(a, 9);
    cout<<ans.front()<<" "<<ans.back()<<endl;
    return 0;
}