#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a;

ll minMoves(vector<ll>&nums, int n){
    ll atl = 0;

    for(int i=1; i<n; i++){
        if(nums[i]<nums[i-1]){
            atl+= nums[i-1]-nums[i];
            nums[i] = nums[i-1];
        }

    }
    cout<<a;
    return atl;
}

int main(){
    int n;
    vector<ll>nums;
    cin>>n;

    for(ll i=0; i<n; i++){
        ll val;
        cin>>val;
        nums.push_back(val);
    }

    cout<<minMoves(nums, n);
 

    return 0;
}