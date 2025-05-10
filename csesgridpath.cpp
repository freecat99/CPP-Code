#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int makeGrid(vector<vector<char>>&mat, int r, int c, int n, vector<vector<int>>&dp){
    
    if(r>n || c>n){
        return 0;
    }

    if(mat[r][c]=='*'){
        return 0;
    }
    if(c==n && r==n){
        return 1;
    }
    if(dp[r][c]!=-1)return dp[r][c];
    return dp[r][c]=(makeGrid(mat, r, c+1, n, dp)+makeGrid(mat, r+1, c, n, dp))%MOD;
}

int main(){

    int n;
    cin>>n;
    vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
    vector<vector<char>>mat(n+1, vector<char>(n+1));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
           cin >> mat[i][j];
        }
    }
    if(mat[0][0]=='*' || mat[n][n]=='*')return 0;

    cout<<makeGrid(mat, 1,1, n, dp);
    return 0;
}