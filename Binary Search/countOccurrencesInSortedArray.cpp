/*
Problem Statement: You are given a sorted array containing N integers and a number X, 
                   you have to find the occurrences of X in the given array.
*/

#include <iostream>
#include <vector>
using namespace std;

int countOccur(vector<int> &arr, int x){
    int n = arr.size();
    int left = 0;
    int right = n-1;
    int first = -1, last = -1;

    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid] == target){
            first = mid;
            last = mid;
            while(first > 0 && arr[first-1] == target)    first--;
            while(last < n && arr[last+1] == target)      last++;
        }
        else if(arr[mid] < target)  left = mid+1;
        else                        right = mid-1;
    }
    if(first == -1)     return 0;
    return (last - first + 1);

}

int main()
{
  
    return 0;
}