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

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xSum = 0;
        for(int &n: nums){
            xSum ^= n;
        }
        int res = 0;
        k ^= xSum;
        while(k>0){
            res += k&1;
            k>>=1;
        }
        return res;
    }
};
 
int main()
{
    
    return 0;
}