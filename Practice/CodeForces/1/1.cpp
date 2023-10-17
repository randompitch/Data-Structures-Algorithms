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
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[0] == 'a' || s[1] == 'b' || s[2] == 'c' ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
 
    return 0;
}