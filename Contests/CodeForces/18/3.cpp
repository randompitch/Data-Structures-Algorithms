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
#include <math.h>
using namespace std;
 
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,l;
        cin >> a >> b >> l;
        if(a==b){
            int ans = 1;
            while(l%a == 0 && l>0){
                l /= a;
                ans++;
            }
            cout << ans << "\n";
            continue;
        }
        int vg= 1, og=l;
        vector<int> v;
        v.push_back(0);
        int i=1;
        while(l%a==0 && l>0){
            v.push_back(i);
            l /= a;
            vg++;
            i++;
        }
        int dv = 1, ans =0;
        map<int,int> cnt;
        int k;
        for(int &it: v){
            int rem = og/dv;
            cnt[rem]++;
            ans++;
            while(rem%b==0 && rem>0){
                ans++;
                rem /= b;
                cnt[rem]++;
            }
            dv *= a;
        }
        cout << cnt.size() << "\n";
    }
    

    return 0;
}