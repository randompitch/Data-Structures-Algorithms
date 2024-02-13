/*
Upper bound is the smallest index such that the number at that index is greater than target.
if and idex such that   arr[idx] > x is not found then the size of the array is returned.

Below is the implementation of the upper_bound algorithm

To use this in code just use
        ub = upper_bound(arr.begin(), arr.end(), target) - arr.begin()

Time Complexity = O(log n) 
*/

#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int> &arr, int target){
    int left = 0;
    int right = arr.size()-1;
    int ans = arr.size();

    while(left <= right){
        int mid = left + (right-left)/2;
        if(arr[mid]>target){
            ans = mid;
            right = mid-1;
        }
        else{
            left = mid-1;
        }
    }
    return ans;
}

int main()
{
  
    return 0;
}