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
    {   // ADJACENCY MATRIX
        int n,m;
        cin >> n >> m;
        int adj[n+1][n+1]{0};
        for(int i=0;i<m;i++){
            int u,v;
            cin >> u >> v;
            adj[u][v] = 1;
            adj[v][u] = 1;
        }

        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                cout << adj[i][j] << " ";
            }
            cout << "\n";
        }
    }
    {   // ADJACENCY LIST
        int n,m;
        cin >> n >> m;
        vector<int> adj[n+1];
        for(int i=0;i<m;i++){
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    return 0;
}