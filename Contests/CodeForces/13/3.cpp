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
    int t;
    cin >> t;
    while(t--){
        int n,k,p;
        cin >> n >> k >> p;
        string s;
        cin >> s;
        if(s.empty()){
            cout << "NO\n";
            for(int i=0;i<n;i++){
                cout << 'a';
            }
            cout << "\n";
            continue;
        }
        unordered_map<char,int> m;
        string ans;
        int cnt = 0;
        for(auto c : s){
            m[c]++;
            if(m.size() == k){
                ans += c;
                cnt++;
                m.clear();
            }
        }
        if(cnt>=n){
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
        if(m.empty()){
            while(ans.size() < n){
                ans += s[s.size()-1];
            }
            cout << ans << "\n";
            continue;
        }
        char ch;
        for(char c = 'a'; c < char(97+k); c++){
            if(m[c] == 0){
                ch = c;
                break;
            }
        }
        while(ans.size() < n){
            ans += ch;
        }
        cout << ans << "\n";
    }

    return 0;
}