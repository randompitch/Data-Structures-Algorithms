#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<vector<char>> ans;

void findPath(vector<vector<int>> &maze, int i, int j, vector<char> &temp){
    int n = maze.size();
    if(i >= n || j >= n)    return;

    if(i == n-1 && j == n-1){
        ans.push_back(temp);
        return;
    }

    if(i+1 < n && maze[i+1][j] == 1){
        temp.push_back('d');
        findPath(maze, i+1, j, temp);
        temp.pop_back();
    }

    if(j+1 < n && maze[i][j+1] == 1){
        temp.push_back('r');
        findPath(maze, i, j+1, temp);
        temp.pop_back();
    }

    return;

}
 
int main()
{
    int t;
    cin >> t;
    vector<vector<int>> maze;
    for(int i = 0; i<t;i++){
        vector<int> temp;
        for(int j = 0; j<t; j++){
            int n;  cin >> n;
            temp.push_back(n);
        }
        maze.push_back(temp);
    }
    
    vector<char> temp;
    findPath(maze, 0, 0, temp);
    cout << endl << "There are " << ans.size() << " paths that rat can take in the maze, which are:" << endl; 
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }   cout << endl;
    }
    
 
    return 0;
}