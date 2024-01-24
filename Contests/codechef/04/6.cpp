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
        int n,x,z;
        cin >> n >> x >> z;
        int cost=0;
        vector<int> pog(n);
        for(int i=0;i<n;i++){
            cin >> pog[i];
            cost+=pog[i];
        }
        sort(pog.begin(),pog.end());
        reverse(pog.begin(),pog.end());
        int sal = 0, hrs = 0;
        while (sal<z && hrs<n)
        {
            sal += x;
            cost -= pog[hrs];
            hrs++;
        }
        if(sal >= z)    cout << hrs << "\n";
        else            cout << -1 << "\n";
        
    }

    return 0;
}