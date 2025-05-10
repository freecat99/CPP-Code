#include<bits/stdc++.h>
using namespace std;

int find(vector<int>nums, int n){
    int c = 1;
    unordered_set<int>st;

    for(int num:nums){
        st.insert(num);
    }

    while(c<=n){
        if(st.find(c)==st.end()){
            return c;
        }
        c++;
    }
    return -1;
}

int main(){
    int n;
    vector<int>nums;
    cin>>n;

    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        nums.push_back(val);
    }
    cout<<find(nums, n);
 

    return 0;
}