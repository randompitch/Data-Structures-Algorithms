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
 
int main()
{
    int t;    cin >> t;
    string s;   cin >> s;
    map<string,int> m;
    for(int i=0; i<t-1; i++){
        string s1 = "";
        s1 = s1 + s[i] + s[i+1];
        m[s1]++; 
    }
    int cnt=0;
    string ans;
    for(auto it = m.begin(); it != m.end(); it++){
        if(cnt < (it->second)){
            cnt = it->second;
            ans = it->first;
        }
    }
    cout << ans << "\n";
 
    return 0;
}