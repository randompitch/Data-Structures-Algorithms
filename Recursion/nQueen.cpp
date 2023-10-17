/*
    N Queen's Problem
    BackTracking
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isSafe(vector<vector<int>> &matrix, int x, int y, int &n){
    for(int row = 0; row < x; row++){
        if(matrix[row][y] == 1)     return 0;
    }
    int row = x, col = y;
    while(row >= 0 && col >= 0){
        if(matrix[row][col] == 1)       return 0;
        row--;      
        col--;
    }
    row = x, col = y;
    while(row >= 0 && col < n){
        if(matrix[row][col] == 1)       return 0;
        row--;
        col++;
    }
    return true;
}

bool Nqueen(vector<vector<int>> &matrix, int x, int &n){
    if(x==n)    return 1;
    for(int col = 0; col < n; col++){
        if(isSafe(matrix, x, col, n)){
            matrix[x][col] = 1;
            if(Nqueen(matrix, x+1, n)){
                return 1;
            }
            matrix[x][col] = 0;
        }
    }
    return 0;
}
 
int main()
{
    int n;    cin >> n;
    int size = n*n;
    vector<vector<int>> matrix(n, vector<int>(n,0));

    if(Nqueen(matrix,0,n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    else    cout << "No Answer" << endl;
    

    
    cout << endl;
    return 0;
}