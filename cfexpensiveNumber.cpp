#include<bits/stdc++.h>
using namespace std;

void cost(){
    string s;
    cin>>s;

    int cnt = 0;
    int n = s.size();
    int lastidx = n-1;

    for(int i=n-1; i>=0; i--){
        if(s[i]=='0')cnt++;
        else{
            lastidx = i;
            break;
        }
    }
    for(int i=0; i<lastidx; i++){
        if(s[i]!='0'){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
}

int main(){
    int t;
    cin>>t;

    while(t--){
        cost();
    }

    return 0;
}