#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
        int m;
        cin>>n>>m;

        vector<int>trees(n);
        for(int i=0; i<m; i++){
            cin>>trees[i];
        }
        cout<<"n:"<<n<<" m: "<<m<<endl;
        return 0;


}