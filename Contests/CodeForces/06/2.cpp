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
 
int sol(string s) {
    int cost{0}, zeroes{0}, ones{0};
    int n = s.length();
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            if(s[i] != '0'){
                cost++;
                zeroes++;
            }
            else{
                ones++;
            }
        }
        else{
            if(s[i] != '1'){
                cost++;
                ones++;
            }
            else{
                zeroes++;
            }
        }
    }
    if(zeroes == ones){
        return 0;
    }
    int swaps = min(zeroes, ones);
    int totCost = cost + (max(zeroes, ones) - swaps);
    if(n == 1) return totCost;
    else    return totCost-1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string n;   cin >> n;
        int res = sol(n);
        cout << res << "\n";
    }

    return 0;
}