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
    bool helper(vector<int> &nums, int v){
        for(int &i: nums){
            if(i == v)  return true;
        }
        return false;
    }
    
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        for(int i=1; i<nums.size();i++){
            if(nums[i] == nums[i-1]+1)  sum += nums[i];
            else    break;
        }
        int ans = sum;
        while(helper(nums,ans)){
            ans++;
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}