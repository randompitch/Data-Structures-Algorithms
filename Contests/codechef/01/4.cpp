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
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        unordered_set<int> s(v.begin(),v.end());
        if(n==4){
            if(v[0]+v[1] != v[2]+v[3])  cout << "YES\n"; 
            else    cout << "NO\n";
        }
        else{
            if(s.size() == 1)   cout << "NO\n";
            else    cout << "YES\n";         
        }

    }
    return 0;
}