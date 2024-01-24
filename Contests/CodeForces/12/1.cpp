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
        int n;  cin >> n;
        string a,b,c;
        cin >> a >> b >> c;
        bool flag = false;
        for(int i=0;i<n;i++){
            if(a[i] != c[i] && b[i] != c[i]){
                flag = true;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else    cout << "NO\n";
    }

    return 0;
}