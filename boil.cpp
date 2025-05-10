#include<bits/stdc++.h>
using namespace std;


int main(){

    int a[]={1,2,3,4,5};
    int p[]={2,4,6,8,10};
    *a = p[3];

    int i, sum=a[0];
/*     for(sum=a[0], i=1; i<5; i++){
        sum+=a[i];
    } */
    for(i=1; i<5; i++){
        sum+=a[i];
    }
    cout<<sum;
    return 0;
}   