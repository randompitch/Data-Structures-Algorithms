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
        int n,k;
        cin >> n >> k;
        int i=1;
        while(true){
            int cur = n/2 + (n&1);
            if(cur>=k){
                cout << ((2*k-1)*i) << "\n";
                break;
            }
            else{
                k -= cur;
                i = i*2;
                n /= 2;
            }
        }
    }

    return 0;
}

/*
1 3 5 7 
2 6  
4

*/