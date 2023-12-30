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
    int t;  cin >> t;
    int x=0,y=0,ans=0;
    string s;   cin >> s;
    for(int i=0; i<t-1; i++){
        if(s[i] == 'U') y++;
        else    x++;
        if(x==y && s[i] == s[i+1])  ans++;
    }
    cout << ans << "\n";
    
 
    return 0;
}