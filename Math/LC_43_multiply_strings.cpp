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

string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0")  return "0";
        int l1 = num1. size();
        int l2 = num2. size();
        vector<int> sol(l1+l2,0);
        for(int i = l1-1; i>=0; i--){
            for(int j = l2-1; j>=0; j--){
                sol[i + j + 1] += (num1[i]-'0') * (num2[j]-'0');
                sol[i + j] += sol[i + j + 1] / 10;
                sol[i + j + 1] %= 10;
            }
        }
        int i = 0;
        string ans;
        while(sol[i] == 0)  i++;
        while(i<sol.size())     ans += to_string(sol[i++]);
        return ans;
    }
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        string s1;  cin >> s1;
        string s2;  cin >> s2; 
        cout << multiply(s1,s2) << endl; 

    return 0;
}