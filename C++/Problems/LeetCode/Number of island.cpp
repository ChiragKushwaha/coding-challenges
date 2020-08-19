#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void callBfs(vector<vector<int>> &grid, int i, int j){
    if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]==0){
        return;
    }

    grid[i][j]=0;
    callBfs(grid, i+1 , j);
    callBfs(grid, i-1 , j);
    callBfs(grid, i , j+1);
    callBfs(grid, i , j-1);
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> grid(m, vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    
    int count =0;
    for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
            if(grid[i][j]==1){
                count++;
                callBfs(grid, i, j);
            }
        }
    }
    cout<<"Number of island are : "<<count<<endl;
    return 0;
}