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
 
void solve(int n, int k){
    string ans = "";
    while(n--){
        int i=0;
        while(i<k){
            ans += char(i+'a');
            i++;
        }
    }
    cout << ans << "\n";
}

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
        if(k==1){
            string ans = "";
            for(int i=0;i<n;i++){
                ans = ans + 'a';
            }
            cout << ans << "\n";
            continue;
        }
        else{
            solve(n,k);
        }
    }

    return 0;
}