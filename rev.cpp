#include<bits/stdc++.h>
using namespace std;

int rev(int n){
    if(n == 0) {
        return 0;
    } else {
        return n % 10 + rev(n / 10);
    }
}

int main(){
    cout<<rev(123);

    return 0;
}