#include<iostream>
#include<vector>
using namespace std;

void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
    
}

int main(){

    

    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int n = matrix.size();
    
    //transpose 
     
    for(int i=0; i<n; i++){
        for(int j=i+1 ; j<n; j++){
            swap(matrix[j][i], matrix[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;


    //rotate an array
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n/2; j++){
            swap(matrix[i][j], matrix[i][n-j-1]);
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}