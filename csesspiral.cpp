#include<bits/stdc++.h>
using namespace std;
#define ll long long

void printRes(vector<pair<ll, ll>> tests, int t){
    ll res;
    for(int i=0; i<t; i++){
        ll y = tests[i].first;
        ll x = tests[i].second;

        if(y>=x){
            if(y%2!=0){
                res = (y-1)*(y-1) + 1 + (x-1);
            }else{
                res = (y*y)-(x-1);
            }
        }else{
            if(x%2==0){
                res = (x-1)*(x-1) + 1 + (y-1); 
            }else{
                res = x*x - (y-1);
            }

        }
        cout<<res<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    vector<pair<ll, ll>> tests(t);
    for(int i=0; i<t; i++){
        ll y;
        ll x;
        cin>> y >> x;
        tests[i].first = y;
        tests[i].second = x;
    }
    printRes(tests, t);
    return 0;
}