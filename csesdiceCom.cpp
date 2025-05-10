#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

//tabulation solution
void tabulation(ll n, vector<ll>& table){
    table[0]=1;
    for(int i=1; i<=n; i++){
        int sum = 0;
        for(int j=1; j<=6; j++){
            if(i>=j){
                sum=(sum+table[i-j])%MOD;
            }
        }
        table[i] = sum;
    }
}

//memoization solution
ll makeComb(ll n, vector<ll>&dp){
    if(n==0)return 1;
    if(dp[n]!=0)return dp[n];
    
    ll ans = 0;
    for(int i=1; i<=6; i++){
        if(n>=i){
            ans=(ans+makeComb(n-i, dp))% MOD;
        }
    }
    dp[n] = ans;
    return ans;
}


int main(){
    ll n;
    cin>>n;
    vector<ll>dp(n+1,0);
    vector<ll>table(n+1,0);

    //cout<<makeComb(n, dp);
    tabulation(n, table);
    cout<<table[n];

    return 0;
}