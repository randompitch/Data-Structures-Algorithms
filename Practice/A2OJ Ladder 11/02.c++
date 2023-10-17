/*
Beautiful Matrix (263A)
Codeforces
*/

#include <iostream>
using namespace std;

int main()
{
    int mat[6][6];
    for(int i = 1; i<6; i++){
        for(int j = 1; j<6; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 1){
                int r = abs(3-i);
                int l = abs(3-j);
                cout << r+l;
                break;
            }            
        }
    } 
    return 0;
}