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
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++)    cin >> a[i];
        for(int i=0;i<n;i++)    cin >> b[i];

        int sol{0}, ans{0}, la{0};

        for(int i=0; i<n; i++){
            ans += a[i];
            k--;
            la = max(la, b[i]);
            sol = max(sol, ans+((k)*la));
            if(k==0)    break;
        }
        
        cout << sol << "\n";
      
    }

    return 0;
}