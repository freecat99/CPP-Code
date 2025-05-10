#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool poss(vector<ll>&machines, ll t, ll time){
    ll totTask = 0;
    for(ll machine:machines){
        totTask+=time/machine;
    }
    if(totTask>=t){
        return true;
    }
    return false;

}

ll facMachines(vector<ll>&machines, ll n, ll t){
    ll low = 0;
    ll high = *min_element(machines.begin(), machines.end())*t;

    while(low<=high){
        ll mid = low+(high-low)/2;
        if(poss(machines, t, mid)){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;


}


int main(){ 
    ll n;
    ll t;
    cin >> n >> t;

    vector<ll> machines;
    for(ll i=0; i<n; i++){
        ll val;
        cin >> val;
        machines.push_back(val);
    }

    ll res = facMachines(machines, n, t);
    cout<<res;


    return 0;
}