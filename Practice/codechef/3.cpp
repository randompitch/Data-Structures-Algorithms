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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int cnt1{0}, cnt0{0};
        for(auto &i : a){
            if(i==1)    cnt1++;
            if(i==0)    cnt0++;
        }
        cout << min(cnt1,cnt0) << endl;
    }

    return 0;
}