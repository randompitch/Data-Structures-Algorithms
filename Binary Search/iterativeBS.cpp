#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    arr = {1,3,4,6,7,10,14,15,17,19};
    int target = 14;
    int left = 0;
    int right = arr.size()-1;
    int idx = -1;
    while(left <= right){
        int mid = (left+right)/2;
        //int mid = left + (right-left)/2;      used when the input is large and (left + right) goes out of bound   and returns the wrong sum
        if(arr[mid] == target){
            idx = mid;
            break;
        }
        else if(arr[mid] < target)      left = mid+1;
        else                            right = mid-1;
    }
    if(idx != -1)   cout << "Found at index: " << idx << "\n";
    else            cout << "Element not present in array.\n";
  
    return 0;
}