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

int pivotInteger(int n) {
        int sum = (n*(n+1))/2;
        int left = 0, right = sum;
        for(int i=1;i<=n;i++){
            right -= i;
            if(left == right)   return i;
            else                left += i;
        }
        return -1;
    }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cout << pivotInteger(t) << "\n";
    return 0;
}