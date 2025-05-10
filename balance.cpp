#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    
    /* 
    vector<vector<int>>accounts = {
        {1,2,3,4},
        {4,1,6,7},
        {1,1,1,1}
        };
        
        int row = accounts.size();
        
        int column = accounts[0].size();
        */
    
    
    int row, column;
    cin>>row>>column;

    vector<vector<int>> accounts(row, vector<int>(column));
    
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<"enter bb of "<< i<< "in bank " << j;
        }
    }
       
    vector<int>balance(row);
    for(int i=0; i<row; i++){
        int sum=0;

        for(int j=0; j<column; j++){
            sum+=accounts[i][j];
        }
        balance[i] = sum;


    }

    for(int i=0; i<row; i++){
        cout<<balance[i]<<" ";
    }
    cout<<endl;

    cout<<"max paise: "<<*max_element(balance.begin(), balance.end());




    return 0;
}
