#include<bits/stdc++.h>
using namespace std;
/* 
vector<int> getLeft(vector<int>& height, int n){
    vector<int>left(n);
    int max = 0;
    for(int i=0; i<n-1; i++){
        if(height[max]>=height[i]){
            left[i] = height[max];
        }else{
            max = i;
            left[i] = height[max];
        }
    }
    left[n-1] = left[n-2];
    return left;
}
vector<int> getRight(vector<int>& height, int n){
    vector<int>right(n);
    int max = n-1;
    for(int i=n-1; i>0; i--){
        if(height[max]>=height[i]){
            right[i] = height[max];
        }else{
            max = i;
            right[i] = height[max];
        }
    }
    right[0] = right[1];
    return right;
}
*/

vector<int> getLeft(vector<int>& height, int n){
    vector<int> left(n);
    left[0] = height[0];
    for(int i = 1; i < n; i++){
        left[i] = max(left[i-1], height[i]);
    }
    return left;
}

vector<int> getRight(vector<int>& height, int n){
    vector<int> right(n);
    right[n-1] = height[n-1];
    for(int i = n - 2; i >= 0; i--){
        right[i] = max(right[i+1], height[i]);
    }
    return right;
}

int main() {
    vector<int>height;
    height.push_back(4);
    height.push_back(2);
    height.push_back(0);
    height.push_back(3);
    height.push_back(2);
    height.push_back(5);
    int n = height.size();

        vector<int> leftMax = getLeft(height, n);
        vector<int> rightMax = getRight(height, n);
        int water = 0;
        for(int i=0; i<n; i++){
            water+= max(0, min(leftMax[i], rightMax[i])-height[i]);
        }
        cout<<water;
    return 0;
}