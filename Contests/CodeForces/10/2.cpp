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
        string s;
        cin >> s;
        int cP=0, cS=0;
        for(char &c: s){
            //cout << c << " ";
            if(c=='+')  cP++;
            else        cS++;
        }
        //cout << "\n";
        if(cP > cS)     cout << cP-cS << "\n";
        else            cout << cS-cP << "\n";
    }

    return 0;
}