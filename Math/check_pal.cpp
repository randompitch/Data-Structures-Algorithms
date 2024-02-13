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
    int t;    cin >> t;
    if(t<0) cout << "false\n";
    else{
        ll dup = t;
        ll rev = 0;
        while(t){
            rev = (rev * 10) + (t % 10);
            t /= 10;
        }
        if(rev == dup)  cout << "true\n";
        else    cout << "false\n";
    }
    return 0;
}