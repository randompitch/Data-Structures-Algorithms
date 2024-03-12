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
    vector<bool> vis(n+1, 0);
    queue<int> q;
    vis[st] = 1;
    q.push(st);
    vector<int> bfs;
    while( !q.empty() ){
        int curr = q.front();
        q.pop();
        bfs.push_back(curr);
        for(auto &it : adj[curr]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    for(auto &it : bfs){
        cout << it << " ";
    }
    return 0;
}