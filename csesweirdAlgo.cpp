#include<bits/stdc++.h>
using namespace std;

void algo(long long n){
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<" ";
    if(n%2==0){
        algo(n/2);
    }
    else{
        algo((n*3)+1);
    }
}

int main(){
    long long n;
    cin>>n;

    algo(n);

    return 0;
}