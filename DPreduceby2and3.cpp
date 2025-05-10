#include<bits/stdc++.h>
using namespace std;
int calls=0;

int reduce(int n, vector<int>& dp){
    calls++;
    if(n==0) return 1;
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=reduce(n/2, dp)+reduce(n/3, dp);
}

int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1, -1);

    cout<<"# ways: "<<reduce(n, dp)<<endl;
    cout<<"# function calls: "<<calls;

    return 0;
}