#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int target, int l, int r){
    if(l>r) return -1;
    int mid = l + (r-l)/2;
    if(arr[mid] == target)  return mid;
    else if(arr[mid] < target)  binarySearch(arr, target, mid+1, r);
    return binarySearch(arr, target, l, mid-1);
}

int main()
{
    vector<int> arr{1,3,4,6,7,10,14,15,17,19};
    int target = 1;
    int idx = binarySearch(arr, target, 0, arr.size()-1);
    if(idx == -1)   cout << "Element not present in array.\n";
    else            cout << "Found element at index: " << idx << "\n";
  
    return 0;
}