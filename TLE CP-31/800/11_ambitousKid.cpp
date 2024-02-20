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
    int mn = INT_MAX;
    for(int i=0;i<t;i++){
        int a;  cin >> a;
        if(abs(a) < mn)     mn = abs(a);
    }
    cout << mn << "\n";
    return 0;
}