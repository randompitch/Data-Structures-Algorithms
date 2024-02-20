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
        int n,k;
        cin >> n >> k;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int a;  cin >> a;
            m[a]++;
        }
        (m[k] >= 1) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}