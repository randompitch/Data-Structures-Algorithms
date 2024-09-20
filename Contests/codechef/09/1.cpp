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
        int m,p;
        cin >> m >> p;
        int pen = 299 - m;
        if(20*pen + p < 300){
            cout << pen << "\n";
            continue;
        }
        else{
            int time = m;
            int ans = 0;
            while(time < 299 && time+1+p+20 <= 1000){
                ans++;
                time++;
                p+=20;
            }
            cout << ans << "\n";
        }
    }

    return 0;
}