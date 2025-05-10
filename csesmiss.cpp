#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

    ll n;
    cin >> n;
    ll sum = 0;

    for(ll i = 0; i < n-1; i++) {
        ll val;
        cin >> val;
        sum += val;
    }

    ll total = (n * (n + 1)) / 2;
    cout << total - sum;

    return 0;
}
