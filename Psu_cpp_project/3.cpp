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
bool flag = 1;

bool solver(int& vis, string str)
{
    bool ans = false;
    for(auto it: str)
    {
        int bit = it - 'A';
        if(vis & (1 << bit))
        {
            ans = 1;
            vis -= (1 << bit);
        }
    }
    return ans;
}

int solve(int idx, vector<pair<string,int>>vec, int vis, vector<vector<int>>&dp)
{
    if(vis == 0) { flag = 0; return 0; }
    if(idx == vec.size()) return 1e7;
 
    if(dp[idx][vis] != -1) return dp[idx][vis];
 
    int pick = INT_MAX;
    int tmp = vis;
    if(solver(vis,vec[idx].first)) 
        pick = vec[idx].second + solve(idx+1,vec,vis,dp);
    int notPick = solve(idx+1,vec,tmp,dp);
 
    return dp[idx][tmp] = max(0,min(pick, notPick));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        flag = 1;
        cin>>n;
        vector<pair<string,int>>vec(n);
        vector<vector<int>>dp(n,vector<int>(8,-1));
        int vis = 7;
        
        for(int i=0;i<n;i++){
            int cost;
            string vit;
            cin>>cost>>vit;
            vec[i] = {vit,cost};
        }
        int ans = solve(0,vec,vis,dp);
        if(flag) cout<<-1<<"\n";
        else cout<<ans<<"\n";
    }

    return 0;
}