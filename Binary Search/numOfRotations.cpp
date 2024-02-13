/*
        Problem Statement: Given an integer array arr of size N, 
        sorted in ascending order (with distinct values). 
        Now the array is rotated between 1 to N times which is unknown. 
        Find how many times the array has been rotated.
*/

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int numRotations(vector<int> &arr){
    int n = arr.size();
    int left = 0;
    int right = n-1;
    int smallest = INT_MAX;
    int pos;

    while(left <= right){
        int mid = left + (right - left)/2;

        if(arr[left] <= arr[right]){
            if(arr[left] < smallest){
                pos = left;
                smallest = arr[left];
            }
            break;
        } 
        if(arr[left] <= arr[mid]){
            if(arr[left] < smallest){
                pos = left;
                smallest = arr[left];
            }
            left = mid+1;
        }
        else{
            if(arr[mid] < smallest){
                pos = mid;
                smallest = arr[mid];
            }
            right = mid-1;
        }
    }
    return pos;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = numRotations(arr);
    cout << "The array is rotated " << ans << " times.\n";
  
    return 0;
}