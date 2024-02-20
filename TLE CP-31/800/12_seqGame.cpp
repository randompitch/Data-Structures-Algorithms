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
            int x;  cin >> x;
            if(i && v.back() > x){
                v.push_back(1);
            }
            v.push_back(x);
        }
        cout << v.size() << "\n";
        for(int &i: v)  cout << i << " ";
        cout << "\n";
    }

    return 0;
}