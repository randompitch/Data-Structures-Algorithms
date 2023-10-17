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
        int n;  cin >> n;
        vector<pair<int,int>> vm(n);
        
        int fs , ss;
        cin >> fs >> ss;        
        int ans{0};
        for(int i=1;i<n;i++){
            int s,e;
            cin >> s >> e;
            if(s >= fs && e >= ss){
                ans = -1;
                cout << ans;
            }
        }
        cout << fs;
        cout << endl;
    }
 
    return 0;
}