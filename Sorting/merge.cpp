#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <climits>
using namespace std;
 
void merge(int array[], int l, int m, int r){
    int n1 = m-l+1, n2 = r-m;
    vector<int> left(n1+1);
    vector<int> right(n2+1);
    for(int i=0;i<n1;i++)   left[i] = array[l+i];
    for(int i=0;i<n2;i++)   right[i] = array[m+1+i];
    left[n1] = right[n2] = INT_MAX;
    int l_i=0,r_i=0;
    for(int i=l; i<=r; i++){
        if(left[l_i] < right[r_i]){
            array[i] = left[l_i++];
        }
        else{
            array[i] = right[r_i++];
        }
    }
}

void mergeSort(int array[], int l, int r){
    if(l==r) return;
    int mid = l + (r-l)/2;
    mergeSort(array, l, mid);
    mergeSort(array, mid+1, r);
    merge(array, l, mid, r);
}

int main()
{
    int arr[] = {2,5,9,1,3,0,8,4,6,7};
    cout << "Before Sorting: ";
    for(int i =0; i<10; i++){
        cout << arr[i] << " ";
    }
    mergeSort(arr, 0, 9);
    cout << "\nAfter Sorting: ";
    for(int i =0; i<10; i++){
        cout << arr[i] << " ";
    }
    
 
    return 0;
}