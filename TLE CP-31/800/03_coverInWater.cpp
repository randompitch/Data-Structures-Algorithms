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
        int cont = 0;
        char last = '#';
        int tot = 0;
        for(auto &c: s){
            if(c=='.' && last == '.')   cont++;
            else{
                if(cont < 2){
                    cont = 0;
                }
            }                        
            last = c;
            if(c == '.')                tot++;
        }
        if(cont >= 2){
            cout << 2 << "\n";
        }
        else{
            cout << tot << "\n";
        }
    }

    return 0;
}