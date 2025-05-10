#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>&vec, int temp){
    int n = vec.size();

    if(n==1 || vec[n-1]<=temp){
        vec.push_back(temp);
        return;
    }
    int x = vec[n-1];
    vec.pop_back();
    insert(vec, temp);
    vec.push_back(x);
}

void sort(vector<int>&vec){
    int n = vec.size();
    if(n==1){
        return;
    }
    int temp = vec[n-1];
    vec.pop_back();
    sort(vec);
    insert(vec, temp);
}


int main(){
    vector<int>vec = {0,1,5,6,2};
    sort(vec);
    for(int num:vec){
        cout<<num<<" ";
    }

    return 0;
}   
