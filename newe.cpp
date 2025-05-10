#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int rows = matrix.size();
    int columns = matrix[0].size();

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int rowpsm = rows + 1;
    int columnpsm = columns + 1;

    vector<vector<int>> psm(rowpsm, vector<int>(columnpsm,0));
    
    for(int i=1; i<rowpsm; i++){
        for(int j=1; j<columnpsm; j++){
            psm[i][j] = psm[i-1][j]+psm[i][j-1]+matrix[i-1][j-1]-psm[i-1][j-1];
        }
        cout<<endl;
    }

    for(int i=0; i<rowpsm; i++){
        for(int j=0; j<columnpsm; j++){
            cout<<psm[i][j]<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}