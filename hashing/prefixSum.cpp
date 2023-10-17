/*  Given an array of N integers, and Q queries
    each having L and R print sum of array elements
    from index L to R
    CONSTRAINTS : 1 <= N <= 10^5
                  1 <= L,R <= N
                  1 <= Q <= 10^5
                  1 <= a[i] <= 10^9
*/

#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

const int N = 1e5+10;
int a[N];
int prefixSum[N];

int main()
{
    int n;  cin>>n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        prefixSum[i] = prefixSum[i-1]+a[i];
    }
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        cout << prefixSum[r] - prefixSum[l-1] << endl;
    } 
    return 0;
}