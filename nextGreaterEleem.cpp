#include<bits/stdc++.h>
using namespace std;

vector<int>build(int nums[], vector<int>&nge, int n){
    stack<int>st;
    st.push(n-1);

    for(int i=n-2; i>=0; i--){
        while(!st.empty() && nums[i]>=nums[st.top()]){
            st.pop();
        }
        if(st.empty()){
            nge[i]=-1;
        }else{
            nge[i]=nums[st.top()];
        }
        st.push(i);
    }

    return nge;
}

int main(){
    int nums[]={6,8,0,1,3};
    int n = sizeof(nums)/sizeof(nums[0]);
    vector<int>nge(n, -1);
    build(nums, nge, n);
    for(int num:nge){
        cout<<num<<" ";
    }

    return 0;
}