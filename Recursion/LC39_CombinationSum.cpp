/*
    39. Combination Sum
    Leetcode
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
class Solution {
public:
    vector<vector<int>> ans;

    void helper(vector<int>& candidates, int target, int currSum,vector<int> tempAr,int i){
        if(currSum == target){
            ans.push_back(tempAr);
            return;
        }
        if(currSum > target || i >= candidates.size()){
            return;
        }
        tempAr.push_back(candidates[i]);
        helper(candidates, target, currSum+candidates[i], tempAr, i);
        tempAr.pop_back();

        if(i+1 < candidates.size()){
            helper(candidates, target, currSum, tempAr, i+1);
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> tempAr;
        helper(candidates, target, 0, tempAr, 0);
        return ans;
    }
}; 

int main()
{
    
    return 0;
}