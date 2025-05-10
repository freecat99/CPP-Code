#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool findSum(vector<ll>& nums, ll sum, vector<ll>& res) {
    ll n = nums.size();
    for(ll i=0; i<n-1; i++) {
        for(ll j=i+1; j<n; j++) {
            if(nums[i] + nums[j] == sum) {
                res.push_back(i + 1);  
                res.push_back(j + 1);
                return true;
            }
        }
    }
    return false;
}

int main(){
    ll n, sum;
    cin >> n >> sum;

    vector<ll> nums;
    for(ll i=0; i<n; i++){
        ll val;
        cin >> val;
        nums.push_back(val);
    }

    vector<ll> res;
    if(findSum(nums, sum, res)) {
        for(ll x : res) {
            cout << x << " ";
        }
    } else {
        cout << "IMPOSSIBLE";
    }

    return 0;
}
