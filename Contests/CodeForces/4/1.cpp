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
    int t;
    cin >> t;
    while(t--){
        int n,k;  cin >> n >>k;
        vector<int> v(n);
        unordered_map<int,int> cnt;
        for(int i=0;i<n;i++){
            cin >> v[i];
            cnt[v[i]]++;
        }
        (cnt[k] >=1) ? cout << "YES" : cout << "NO";
        cout << endl;
        

    }
 
    return 0;
}