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
 
#define int long long
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<map<char, int>> mp(n);
        while (m--){
            string str;
            cin >> str;
            for(int i=0; i<str.size(); i++){
                if(str[i] == '0'){
                    mp[i]['0']++;
                    //mp[i].first.first++;
                }
                else if(str[i] == '1'){
                    mp[i]['1']++;
                    //mp[i].first.second++;
                }
                else{
                    mp[i]['?']++;
                    //mp[i].second++;
                }
            }
        }
        int a=0,b=0,c=0,ans=0;
        for(int i=0; i<n; i++){
            a = mp[i]['0'];
            b = mp[i]['1'];
            c = mp[i]['?'];
            while(c--){
                if(a<=b)    a++;
                else        b++;
            }
            ans += (a*b);
        }
        cout << ans << "\n";
    }

    return 0;
}