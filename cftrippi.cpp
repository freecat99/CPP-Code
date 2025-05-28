#include<bits/stdc++.h>
using namespace std;

void getchars() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    string res;

    while (ss >> word) {
        res += word[0];
    }

    cout << res << endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();

    while(t--){
        getchars();
    }


    return 0;
}