/*
Lower bound is the smallest index of in a sorted array where the value at that index is greater than or equal to a given target.
If such an index where arr[idx] >= x is not found then the lower bound returns the size of the array.
Below is the implementation of the lower bound algorithm.

To use this in code/contests you need not implement it everytime you want to use, just simply use the following:
        lb = lower_bound(arr.begin(), arr.end(), target) - arr.begin()

Time Complexity : O(log n)        
*/

#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> &arr, int size, int x){
    int left = 0;
    int right = size-1;
    int ans = size;

    while(left <= right){
        int mid = left + (right-left)/2;
        if(arr[mid] >= x){
            ans = mid;
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return ans;
}

int main()
{
  
    return 0;
}