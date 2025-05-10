#include<bits/stdc++.h>
using namespace std;


int main(){
    int nums[] = {4,5,1,2,3};
    set<int>sett;
    for(int num:nums){
        sett.insert(num);
    }
    int maxele = *max_element(sett.begin(), sett.end());
    int number = 1;
    while(number<=maxele){
        if(sett.find(number)==sett.end()){

            break;
        }
        number++;
    }
    cout<<number;


    return 0;
}