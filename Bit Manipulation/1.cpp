/*
    in an array all numbers appear thrice except one which appears only once
    find this number that appears only once.
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void helper(vector<int> &a, int n){
    for(int i=0; i<32; i++){
        if((n>>i)&1){
            a[i]++;
        }
    }
}

int main()
{
    vector<int> a(32,0);
    int arr[] = {1, 10, 1, 1};
    for(int i=0;i<4;i++)   helper(a,arr[i]);
    int sol = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i]%3){
            sol += pow(2,i);
        }
    }
    cout << sol;
  
    return 0;
}