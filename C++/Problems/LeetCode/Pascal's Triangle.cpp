#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> triangle(n);
    if(n==0){
        return triangle;
    }
    triangle[0]=vector<int>{1};
    // vector<int> row = ;
    // triangle.push_back(row);
    cout<<"p"<<triangle[0][0]<<endl;
    for(int i=1;i<n;i++){
        vector<int> preRow = triangle[i-1];
        vector<int> temp;
        temp.push_back(1);
        for(int j =1;j<i;j++){
            temp.push_back(preRow[j-1]+ preRow[j]);
        }
        temp.push_back(1);
        triangle[i]=vector<int>{temp};
    }
    return triangle;
}

int main(){
    int n ;
    cin>>n;
    vector<vector<int>> triangle = pascalTriangle(n);
    for(auto r: triangle){
        for(auto e: r)
            cout<<e<<" ";
        cout<<endl;
    }
    return 0;
}