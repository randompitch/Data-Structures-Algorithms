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
using namespace std;
 
typedef long long ll;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;  cin >> n;
        string s;   cin >> s;
        string ans = "";
        int w{0};
        for(int i=0;i<n;i++){
            ans.push_back('P');
            if(s[i] == 'R')     w++;
        }
        int rLef = n/2 + 1 - w;
        for(int i=n-1; i>=0;i--){
            if(rLef>0 && s[i] != 'R'){
                if(s[i] == 'P') ans[i] = 'S';
                if(s[i] == 'S') ans[i] = 'R';
                rLef--;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}