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
        string s;   cin >> s;
        int flag=1;
        for(int i=0; i <n; i++){
            if(s[i] > s[i+1]){
                s.erase(i,1);
                flag = 0;
                break;
            }
        }
        if(flag)    s.erase(n-1);
        cout << s << "\n";
    }

    return 0;
}