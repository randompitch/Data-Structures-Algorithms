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
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++)      cin >> a[i];
        for(int i=0; i<n; i++)      cin >> b[i];

        unordered_map<int,int> v(n);
        for(int i=0;i<n;i++){
            v[a[i]] = b[i];
        }
        sort(a.begin(), a.end());
        vector<int> ans;
        for(int &it: a){
            ans.push_back(v[it]);
        }
        for(int &i: a)      cout << i << " ";
        cout <<"\n";
        for(int &i: ans)      cout << i << " ";
        cout << "\n";
    }

    return 0;
}