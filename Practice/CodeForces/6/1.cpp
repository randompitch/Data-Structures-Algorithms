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
#include <math.h>
using namespace std;
 
pair<int,int> sol(int n){
    string s = to_string(n);
    for(int i = 1; i < s.size(); ++i){
        string a_str = s.substr(0, i);
        string b_str = s.substr(i);

        int a = stoi(a_str);
        int b = stoi(b_str);

        if (a_str[0] != '0' && b_str[0] != '0' && b > a) {
            return make_pair(a, b);
        }
    }
    return make_pair(-1, -1);
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;  cin >> n;
        pair<int,int> ans = sol(n);
        if (ans.first != -1 && ans.second != -1) {
            if(ans.first == ans.second){
                cout << "-1" << endl;
            }else{
                cout << ans.first << " " << ans.second << endl;
            }
        } else {
            cout << "-1" << endl;
        }
    }
    

    return 0;
}