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
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for(int i = 0; i < n; i++)           cin >> a[i];      
        int mx = 0;
        int curr = 0;
        for(int i = 0; i < n; i++){
            curr += a[i];
            if (curr >= m) {
                mx++;
                curr = 0; 
            }
        }

        cout << mx << endl;
    }

    return 0;
}