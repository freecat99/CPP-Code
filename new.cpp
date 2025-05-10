#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "0111010";

    int count0=0, count1=0;

    int i=0;
    for(; i<s.size(); i++){
        for(int l=0; l<=i; l++){
            if(s[l]=='0'){
                count0++;
            }
        }
        for(int l=i+1; l<s.size(); l++){
            if(s[l]=='1'){
                count1++;
            }
        }
        if(count0==count1){
            break;
        }

    }
    cout<<i;
    cout<<count0<<"s";
    cout<<count1;

    return 0;
}