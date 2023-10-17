/*
Lights Out (275A)
Codeforces
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int matrix[4][4];
    int sol[4][4]; 
    for(int i = 1; i <= 3; i++){
        for(int j=1;j<=3;j++){
            cin >> matrix[i][j];
            sol[i][j] = matrix[i][j];
        }

    }   

    for(int i = 1; i <= 3; i++){
        for(int j=1;j<=3;j++){
            if(matrix[i][j] != 0){
                sol[i][j-1] += matrix[i][j];
                sol[i][j+1] += matrix[i][j];
                sol[i-1][j] += matrix[i][j];
                sol[i+1][j] += matrix[i][j];
            }
        }
    }

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(sol[i][j] % 2 == 0)  cout << 1;
            else    cout << 0;
        }
        cout << endl;
    }
    
 
    return 0;
}