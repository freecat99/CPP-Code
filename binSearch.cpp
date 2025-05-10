#include<iostream>
#include<vector>
using namespace std;

class BinSearch{
    public:

    vector<int> arr;

    BinSearch(vector<int> nums){
        this->arr = nums;

    }

    int ibs(vector<int> arr, int i, int j, int val){

        while(i<=j){
            int mid = (i+j)/2;

            if(arr[mid]==val){
                return mid;
            }
            else if(arr[mid]>val){
                j = mid-1;
            }
            else {
                i = mid+1;
            }
        }
        return -1;

    }
    int rbs(vector<int> arr, int i, int j, int val){
        
        if(i>j){
            return -1;
        }

        int mid = (i+j)/2;

        if(arr[mid]==val){
            return mid;
        }
        else if(arr[mid]>val){
            rbs(arr, i, mid-1, val);
        }
        else{
            rbs(arr, mid+1, j, val);
        }
    }

};

int main(){

    int n;
    cin>>n;
    cout<<"enter array elements: ";
    vector<int> arr(n);


    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int i=0; 
    int j=n-1;
    
    int val;
    cout<<"enter val:";
    cin>>val;

    BinSearch b(arr);

    int recRes = b.rbs(arr, i, j, val);
    int iteRes = b.ibs(arr, i, j, val);

    cout<<"iteration: "<<iteRes<<endl;
    cout<<"recursion: "<<recRes<<endl;


    return 0;
}