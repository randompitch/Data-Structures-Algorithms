#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;  cin>>n;
        vector<int> ans(n);
        ans[0] = 1;
        ans[1] = 2;
        ans[2] = 4;
        for (int i = 3; i < n; i++)
        {
            ans[i] = 3*(ans[i-1] + ans[i-2]) + 1;
        }
        for(int i: ans){
            cout << i << " ";
        }
        cout << endl;
        

    }
 
    return 0;
}