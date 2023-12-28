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
 
typedef long long ll;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        unordered_map<char,int> m;
        for(int i=0;i<9;i++){
            char c; cin >> c;
            m[c]++;
        }
        for(auto &i : m){
            if(i.second == 2)   cout << i.first;
        }
        cout << "\n";
    }

    return 0;
}