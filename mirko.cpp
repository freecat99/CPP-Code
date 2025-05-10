    #include<bits/stdc++.h>
    using namespace std;

    bool ifPossible(vector<int>trees, int height, int m){
        int sum = 0;
        for(int tree:trees){
            if(tree>=height){ //only cut a tree if it's height >= required height
                sum+=tree-height;
            }
        }
        if(sum>=m){
            return true;
        }
        return false;
    }

    int findTreeLength(vector<int>trees, int n, int m){
        int left = 0; //min height where we can cut(ground level)
        int right = *max_element(trees.begin(), trees.end()); //maxHeight where we can cut(tallest tree height)
        int mid = 0;
        
        while(left<right){
            mid = left+(right-left)/2;
            
            if(ifPossible(trees, mid, m)){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return right;

    }

    int main(){
        int n;
        int m;
        cin>>n>>m;

        vector<int>trees(n);
        for(int i=0; i<n; i++){
            cin>>trees[i];
        }
        cout<<findTreeLength(trees, n, m);
        return 0;
    }