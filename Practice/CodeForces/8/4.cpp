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
        ll n;   
        string s,sol;   
        cin >> n;
        cin >> s;
        bool vow = false;
        for(int i=0;i<n;i++){
            if(s[i] == 'e' || s[i] == 'a'){
                sol += s[i];
                vow = true;
                if(i+2 < n && (s[i+2] == 'e' || s[i+2] == 'a')){
                    sol += '.';
                    vow = false;
                }
            }
            else{
                sol += s[i];
                if(vow){
                    sol += '.';
                    vow = false;
                }
            }
        }
        if(sol.back() == '.')   sol.pop_back();
        cout << sol << "\n";
    }

    return 0;
}