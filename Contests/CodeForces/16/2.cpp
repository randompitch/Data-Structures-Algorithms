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
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)  cin >> v[i];
        int cy = v[0];
        for(int i=1; i<n; i++){
            if(v[i] > cy)   cy = v[i];
            else{
                int tmp = v[i];
                int j=2;
                while(tmp <= cy){
                    tmp = v[i]*j;
                    j++;
                }
                cy = tmp;
            }
        }
        cout << cy << "\n";
    }

    return 0;
}