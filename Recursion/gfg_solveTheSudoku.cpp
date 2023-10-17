//{ Driver Code Starts
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    bool check(int grid[N][N], int row, int col, int num){
        //row
        for(int i = 0; i < 9; i++){
            if(grid[i][col] == num) return false;
        }
        //col
        for(int j = 0; j < 9; j++){
            if(grid[row][j] == num)   return false;
        }
        //block
        int ni = row - row%3;
        int nj = col - col%3;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(grid[ni+i][nj+j] == num)   return false;
            }
        }
        return true;
    }
    bool helper(int grid[N][N], int row, int col){
        if(row == 9)    return true;
        if(col == 9)    return helper(grid, row+1, 0);
        if(grid[row][col] != 0) return helper(grid, row, col+1);
        
        for(int i = 1; i <= 9; i++){
            if(check(grid, row, col, i)){
                grid[row][col] = i;
                if(helper(grid, row, col+1))    
                    return true;
            }
            grid[row][col] = 0;
        }
        return false;
        
    }
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        return helper(grid, 0, 0);
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                cout << grid[i][j] << " ";
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends