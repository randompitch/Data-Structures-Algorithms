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
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        vector<int> mc(26);
        for (int i = 0; i < 26; i++) {
            mc[i] = i + 1;
        }
        
        vector<int> count(26);
        for(char c: s){
            int idx = c-'A';
            count[idx]++;
        }
        int solv{0};
        for(int i=0;i<26;i++){
            if(count[i] >= mc[i]){
                solv++;               
            }
        }
        cout << solv << "\n";
    }

    return 0;
}