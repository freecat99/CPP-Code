#include<bits/stdc++.h>
using namespace std;

bool one(){
    cout<<"one";
    return false;
}

bool two(){
    cout<<"two";;
    return true;
}

int main(){

    if(one() && two()){
        cout<<"three";
    }

    return 0;
}