#include<bits/stdc++.h>
using namespace std;
int calls = 0 ;

int tribo(int n){
    calls++;
    if(n<2)return n;
    if(n==2)return 1;
    return tribo(n-1)+tribo(n-2)+tribo(n-3);
}

int main(){
    int n;
    cin>>n;
    cout<<tribo(n)<<endl;
    cout<<"calls: "<<calls;
    return 0;
}