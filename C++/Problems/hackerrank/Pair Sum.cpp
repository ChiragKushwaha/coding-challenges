#include<iostream>
#include<vector>

using namespace std;

vector<int> allPairs(vector<int>&A){
    vector<int> sum(A.size());
    sum[A.size()-1]=A[A.size()-1];
    sum[0]=A[0];
    for(int i =A.size()-2;i>0;i--)
        sum[i]=A[i]+sum[i+1];
    return sum;
}
vector<int> shortPairs(vector<int>&A){
    vector<int> arr;
    int start,end;
    for(int i =0;i<A.size();i++){
        if(A[i]<=0)
        {}
        else{
            start = i;
            break;
        }
    }
    for(int i =A.size()-1;i>=0;i--){
        if(A[i]<=0)
        {}
        else{
            end = i;
            break;
        }
    }
    for(int i = start; i<=end;i++)
    arr.push_back(A[i]);
    return arr;
}
long largestValue(vector<int> A) {
    vector<int> sortArray = shortPairs(A);
    vector<int> sum=allPairs(sortArray);
    for(auto i : sum){
        cout<<i<<"   ";
    }
    cout<<endl;
    long value=0;
    for(int i =0;i<sortArray.size()-1;i++){
        value = value+ (sum[i+1]*sortArray[i]);
    }
    return value;
}

int main(int argc, char const *argv[])
{
    vector<int> a={5, 7, -5, 6 ,3 ,9, -8 ,2, -1, 10};
    
    cout<<largestValue(a)<<endl;
    return 0;
}
