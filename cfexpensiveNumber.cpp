#include<iostream>
using namespace std;
#define LL long long

void countzero() {
    string s;
    cin >> s;
    LL res = s.size()-1;
    LL lastNZ = -1; 

    for (LL i = res - 1; i >= 0; i--) {
        if (s[i] != '0') {
            lastNZ = i;
            break;
        }
    }

    for (LL i = 0; i < lastNZ; i++) {
        if (s[i] == '0') {
            res--;
        }
    }

    cout << res << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        countzero();
    }
    return 0;
}
