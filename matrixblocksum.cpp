#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>>matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int row = matrix.size();
    int col = matrix[0].size();

    vector<vector<int>>psm(row + 1, vector<int>(col + 1));
    vector<vector<int>>answer(row, vector<int>(col));
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            psm[i][j] = matrix[i-1][j-1]+psm[i-1][j]+psm[i][j-1]-psm[i-1][j-1];
       }
    }
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
                matrix[i][j] = psm[i+1][j+1];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
                cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}