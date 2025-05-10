#include<bits/stdc++.h>
using namespace std;

bool recur(string str, int i, int j){
    if(i>=j){
        return true;
    }
    if(str[i]==str[j]){
        return recur(str, i+1, j-1);

    }
    else{
        return false;
    }
}


int main(){

    string str = "adeshhseda";
    int i = 0;
    int j = str.size()-1;

    cout<<"palindrome?: "<<recur(str, i, j);

    return 0;
}