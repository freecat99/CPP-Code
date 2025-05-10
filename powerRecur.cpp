#include<bits/stdc++.h>
using namespace std;

int powe(int base, int n){
    
    if(n==0){
        return 1;
    }if(n==1){
        return base;
    }
    int halfPower = powe(base, n/2);
    if(n%2!=0){
        return base*halfPower*halfPower;
    }
    if(n%2==0){
        return halfPower*halfPower;

    }
}

int main(){

    int n = 5;
    int base = 2;

    cout<<base<<"^"<<n<<": "<<powe(base, n)<<endl;

    return 0;
}




fxn(queue<int>q, int i, int n){
    if(i==n){
        return;
    }
    int temp = q.front();
    q.pop();
    return fxn(q, i+1, n);
    q.push(temp);

}
    