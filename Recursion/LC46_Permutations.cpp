/*
    46. Permutations
    Given an array nums of distinct integers, return all the possible permutations.
    You can return the answer in any order.
    LeetCode
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int> &nums, int i){
        if(i == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j = i; j<nums.size();j++){
            swap(nums[i], nums[j]);
            helper(nums,i+1);
            swap(nums[j], nums[i]);
        }
        return;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums,0);
        return ans;
    }
};
 
int main()
{
    
    return 0;
}