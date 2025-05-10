#include<bits/stdc++.h>
using namespace std;
#define ll long long

void findMiss(vector<ll>& nums, int n){
    sort(nums.begin(), nums.end());
    ll ps = 0;
    for(int i=0; i<n; i++){
        if(nums[i]<=ps+1){
            ps+=nums[i];
        }
        else{
            cout<<ps+1;
            return;
        }

    }
    cout<<ps+1;
}



int main(){
    int n;
    cin>>n;
    vector<ll>nums(n);
    for(int i=0; i<n; i++){
        ll val;
        cin>>val;
        nums[i] = val;
    }

    findMiss(nums, n);


    return 0;
}