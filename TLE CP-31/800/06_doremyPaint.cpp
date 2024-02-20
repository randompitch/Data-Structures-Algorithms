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
        int n;cin >> n;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int a;  cin >> a;
            m[a]++;
        }
        if(m.size()>2){
            cout << "No\n";
            continue;
        }
        if(m.size()==1){
            cout << "Yes\n";
            continue;
        }
        vector<int> v;
        for(auto &it : m){
            v.push_back(it.second);
        }
        (abs(v[0] - v[1]) <= 1) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}