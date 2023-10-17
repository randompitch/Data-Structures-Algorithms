#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<bool> rows(m, 0);
        vector<bool> cols(n, 0);
        for(int i = 0; i < m; i++){
            for(int j = 0; j<n;j++){
                if(matrix[i][j] == 0){
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }         
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rows[i] || cols[j]){
                    matrix[i][j] = 0;
                }
            }
        }

        
    }
};