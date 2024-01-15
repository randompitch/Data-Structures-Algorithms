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
        int n;  
        string s,f;
        cin >> n >> s >> f;
        int cnt1 = 0, cnt2 = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '0' && f[i] != '0')     cnt1++;
            if(s[i] == '1' && f[i] == '0')     cnt2++;
        }
        cout << max(cnt1,cnt2) << "\n";
    }

    return 0;
}