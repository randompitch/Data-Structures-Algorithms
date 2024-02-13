/*
Floor: largest number in an array that is less than equal to x      
Ceil: smallest number in an array that is greater than equal to x   ==> Lower Bound  
*/

#include <iostream>
#include <vector>
using namespace std;

int floor(vector<int> &arr, int target){
    int ans = -1;
    int left = 0;
    int right = arr.size()-1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid] <= target){
            ans = arr[mid];
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return ans;
}

int main()
{
  
    return 0;
}