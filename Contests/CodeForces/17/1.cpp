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
    while (t--)
    {
        string s;
        cin >> s;
        int a=0,b=0;
        for(auto &c: s){
            if(c=='A')  a++;
            if(c=='B')  b++;
        }
        (a>b) ? cout << "A" : cout << "B";
        cout << "\n";
    }
    

    return 0;
}