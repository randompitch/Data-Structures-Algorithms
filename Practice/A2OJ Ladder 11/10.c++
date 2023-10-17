/*
Stones on the Table (266A)
Codeforces
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    string s;   cin >> s;
    int ans = 0;
    for(int i = 1; i < t; i = i+2){
        if(s[i] == s[i-1] && s[i] == s[i+1])    ans += 2;
        else if (s[i] == s[i-1] || s[i] == s[i+1])  ans++; 
    }
    cout << ans << endl;
 
    return 0;
}