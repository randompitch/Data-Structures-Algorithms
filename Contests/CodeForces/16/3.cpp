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
        int n,m;  cin >> n >> m;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        string s;
        cin >> s;
        vector<int> ans;
        int j = 1;
        int left = 0, right = n-1;
        for(int i=0; i<n-1; i++){
            if(s[i] == 'L'){left++;}
            else{right--;}
        }
        int cr = v[right];
        for(int i= n-2; i>= -1; i--){
            j = cr%m;
            cr = cr%m;
            ans.push_back(j);
            if(s[i]=='L'){
                left--;
                cr = cr*v[left];
            }
            else{
                right++;
                cr = cr*v[right];
            }
        }
        reverse(ans.begin(), ans.end());
        for(int &x: ans)    cout << x << " ";
        cout << "\n";
    }

    return 0;
}