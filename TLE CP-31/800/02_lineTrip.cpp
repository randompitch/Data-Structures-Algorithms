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
#include <limits.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> vec(n);
        int mxDiff = 0, last = 0;
        
        for(int i=0;i<n;i++){
            cin >> vec[i];
            mxDiff = max(vec[i]-last,mxDiff);
            last = vec[i];
            //cout << mxDiff << "---";
        }
        //for(auto &x: vec)   cout << x << " ";
        //cout << endl;
        mxDiff = max(mxDiff, 2*(x-vec[n-1]));
        cout << mxDiff << "\n";
        
    }

    return 0;
}