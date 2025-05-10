#include<bits/stdc++.h>
using namespace std;

bool fx(int* arr, int n){
    if(n-1<=1){
        return true;
    }
    if(arr[n-1]>=arr[n-2]){
        return fx(arr, n-1);
        
    }
    return false;
}


int main(){
    int arr[]={2,3,4,66,82,3222};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"ans:"<<fx(arr, n);

    return 0;
}