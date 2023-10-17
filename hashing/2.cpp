/* Given an array of N integers and Q queries
    and each query has a number X, print count
    of that number in the array.
    CONSTRAINTS : 1 <= Q <= 10^5
                  1 <= N <= 10^5
                  1 <= a[i] <= 10^7
*/

#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

const int N = 1e7 + 10;
int hsh[N];

int main()
{
    int n;  cin >> n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin >> a[i];
        hsh[a[i]]++;
    }
    int t;
    cin >> t;
    while(t--){
        int x;  cin>>x;
        cout << hsh[x] <<endl;
    }
    return 0;
}