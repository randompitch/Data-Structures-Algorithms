#include <iostream>
#include <vector>
using namespace std;
vector<vector<char>> ans;
void findPath(vector<vector<int>> &mat, int i, int j, vector<char> &temp)
{
    int n = mat.size();

    if(i >= n || j >= n)
    {
        return;
    }

    if(i == (n-1) && j == (n-1))
    {
        ans.push_back(temp);
        return;
    }

    if(i+1 < n && mat[i+1][j] == 1)
    {
        temp.push_back('d');
        findPath(mat, i+1, j, temp);
        temp.pop_back();
    }


    if(j+1 < n && mat[i][j+1] == 1)
    {
        temp.push_back('r');
        findPath(mat, i, j+1, temp);
        temp.pop_back();
    }
    
    return;

}

int main()
{
    vector<vector<int>> mat;
    int n; cin>>n;
    for(int i = 0; i<n; i++)
    {
        vector<int> temp;
        for(int j = 0; j<n; j++)
        {
            int t; cin>>t;
            temp.push_back(t);
        }
        mat.push_back(temp);
    }
    vector<char> temp = {};
    findPath(mat, 0, 0, temp);
    cout<<endl;

    for(int i = 0; i<ans.size(); i++)
    {
        for(int j = 0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}