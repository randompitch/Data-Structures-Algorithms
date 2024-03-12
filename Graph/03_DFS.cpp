#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <limits.h>
using namespace std;
 
typedef long long ll;
 
void dfsRecur(int curr, vector<int> adj[], vector<bool> &vis, vector<int> &dfs){
    vis[curr] = 1;
    dfs.push_back(curr);
    for(auto &it: adj[curr]){
        if( !vis[it] ){
            dfsRecur(it,adj,vis,dfs);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int st; cin >> st;
    vector<bool> vis(n+1,0);
    vector<int> dfs;
    dfsRecur(st, adj, vis, dfs);
    for(auto &it : dfs){
        cout << it << " ";
    }


    return 0;
}