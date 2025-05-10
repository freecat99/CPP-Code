#include<bits/stdc++.h>
using namespace std;


int findmax(string str){
    int n = str.size();
    int i=0, j=0;
    int cnt=0, mxCnt=0;

    while(j<n){
        while(str[i]==str[j]){
            cnt++;
            mxCnt = max(mxCnt, cnt);
            j++;
        }
        if(str[i]!=str[j]){
            i=j;
            cnt=0;
        }
    }
    return mxCnt;
}

int main(){
    string str;
    getline(cin, str);

    cout<<findmax(str);
    return 0;
}