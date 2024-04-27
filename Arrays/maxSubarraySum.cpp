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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int ans = INT_MIN;
        int sum = 0;
        int start = -1;
        int astart = -1, aend = -1;
        for(int i=0; i<n; i++){
            if (sum == 0){
                start = i;
            }
            sum += v[i];
            if(sum > ans){
                ans = sum;
                astart = start;
                aend = i;
            }

            if(sum < 0){
                sum = 0;
            }
        }
        cout << ans << "\n";
        cout << "Maximum Subarray = [";
        for(int i=astart; i<=aend; i++){
            cout << v[i] << " ";
        }
        cout << "]\n";
    }
    return 0;
}