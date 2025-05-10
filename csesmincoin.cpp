#include<bits/stdc++.h>
using namespace std;

int minCoins(int sum, vector<int>&coins, int idx){
    int cnt = 0;
    int minCnt = INT_MAX;
    int n = coins.size();
    // if(idx==n)return 0;
    if(sum==0)return 1;
    for(int i=0; i<n; i++){
        if(sum>=coins[i]){
            cnt++;
            minCnt = min(cnt, minCnt);
        }
    }
    return cnt;
}

int main(){
    int n;
    int sum;
    cin>>n>>sum;
    vector<int>coins(n);
    for(int &ele:coins){
        cin>>ele;
    }
    cout<<minCoins(sum, coins, 0);

    return 0;
}