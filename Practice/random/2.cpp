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
 
typedef long long ll;

int bs(vector<int> &v, int k){
    int left = 0, right = v.size();
    int ans = 0;
    while(left<=right){
        int mid =(left+right)>>1;
		if(v[mid]<=k)
		{
			left = mid + 1;
			ans = mid;
		}
		else right=mid-1;
    }
    return ans;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;      cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    sort(v.begin(),v.end());
    
    int m,x;      cin >> m;
    for(int i=0;i<m;i++){
        cin >> x;
        cout << upper_bound(v.begin(), v.end(), x) - v.begin() << "\n";
    }


    return 0;
}