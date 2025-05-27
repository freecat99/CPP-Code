#include<bits/stdc++.h>
using namespace std;

void rksh(){
    int n, m, k;
    cin>>n>>m>>k;
    string s;
    cin>>s;
    
    int res=0;
    int i=0;
    int cnt = 0;
    while(i<n){
        if(s[i]=='0'){
            cnt++;
            //i++;
            if(cnt==m){
                res++;
                cnt=0;
                i+=k-1;
            }
        }
        else{
            cnt=0;
        }
        i++;
    }
    cout<<res<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        rksh();
    }

    return 0;
}