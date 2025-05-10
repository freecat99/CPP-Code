#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>height;
    height.push_back(4);
    height.push_back(2);
    height.push_back(0);
    height.push_back(3);
    height.push_back(2);
    height.push_back(5);
    int n = height.size();
    vector<int>left(n, height[0]);
    vector<int>right(n, height[n-1]);

    for(int i=1; i<n; i++){
        left[i] = max(left[i-1],height[i]);
    }

    for(int i=n-2; i>=0; i--){
        right[i] = max(right[i+1],height[i]);
    }

    for(int num:left){
        cout<<num<<" ";
    }
    cout<<endl;
    for(int num:right){
        cout<<num<<" ";
    }
    return 0;
}