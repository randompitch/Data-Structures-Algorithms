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
        int sa,sb;
        cin >> sa >> sb;
        vector<int> a(sa);
        vector<int> b(sb);
        
        int mx = 0;
        for(int i=0;i<sa;i++){
            cin >> a[i];
        }
        for(int i=0; i<sb; i++){
            cin >> b[i];
            mx = max(mx,b[i]);
        }
        sort(a.begin()+(sa-mx), a.end());
        for(auto &x: a){
            cout << x << " ";
        }
        cout <<"\n";
    }
    

    return 0;
}