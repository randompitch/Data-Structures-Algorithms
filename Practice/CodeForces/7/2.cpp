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
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> v;
        for(int i=n;i>=1;i--){
            v.push_back(i);
        }
        sort(v.begin(), v.begin()+k+1);
        for(auto i: v){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}