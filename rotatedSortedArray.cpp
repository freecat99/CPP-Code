#include<iostream>
#include<vector>
using namespace std;



int binarySearch(vector<int>& nums, int start, int end, int target){

    while(start<=end){
        int mid = start+(end-start)/2;

        if(nums[mid]==target){
            return mid;
        }
        else if (nums[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;

}

int main() {

    vector<int>nums = {2,2,5,6,0,0,1,2};
    int target = 0;

    int n = nums.size();

    int l = 0;
    int r = n-1;

    while(l<r){

        while(l<r && nums[l]==nums[l+1]){
            l++;
        }

        while(l<r && nums[r]==nums[r-1]){
            r--;
        }
        int mid = l+(r-l)/2;
        
        if(nums[mid]>nums[r]){
            l = mid+1;
        }
        else{
            r = mid;
        }

    }
    
    int pivot = r;

    int res=-1;

    if(target>=nums[0] && target<=nums[pivot-1]){
        res = binarySearch(nums, 0, pivot-1, target);
    }
    else{
        res = binarySearch(nums, pivot, n-1, target);
    }
    cout<<res;

    return 0;
}

