#include<bits/stdc++.h>
using namespace std;

bool checkZero(map<char, int>mapper){
    for(auto it:mapper){
        if(it.second>0){
            return false;
        }
    }
    return true;
}


int main(){
    string code;
    getline(cin, code);
    string letter;
    getline(cin, letter);
    bool ans = false;
    
    int m = code.size();
    int n = letter.size();

    map<char,int>mapper;
    for(char ch:code){
        mapper[ch]++;
    }


    int i=0;
    int j=0;
    while(j<n){
        mapper[letter[j]]--;
        if(j-i+1==m){
            if(checkZero(mapper)){
                ans = true;
            }
            mapper[letter[i]]++;
            i++;
        }
        j++;
    }

    cout<<ans;

    return 0;
}