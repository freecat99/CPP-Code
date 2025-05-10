#include<bits/stdc++.h>
using namespace std;
int calls=0;

int reduce(int n){
    calls++;
    if(n==0) return 1;
    return reduce(n/2)+reduce(n/3);
}

int main(){
    int n;
    cin>>n;

    cout<<"# ways: "<<reduce(n)<<endl;
    cout<<"# function calls: "<<calls;

    return 0;
}