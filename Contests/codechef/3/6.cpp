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
 
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n; cin >> n;
	    std::vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin >> v[i];
	    }
	    int idx = 0;
	    int mn = v[0];
	    int sol = 0;
	    
	    vector<int> v1(n);
	    v1[0] = v[0];
	    
	    for(int i=0; i<n; i++){
	        if(v[i] <= mn){
	            mn = v[i];
	            idx = i;
	        }
	        if(v[i] > 0)    sol++;
	        if(i>0) v1[i] = min(v1[i-1],v[i]);
	    }
	    int cnt = 0;
	    int res = sol;
	    for(int i=idx; i>=0; i--){
	        if(v[i] == v1[i] && v[i] > 0){
	            cnt++;
	            int op = v[i];
	            res = min(res, sol-cnt+op);
	        }
	    }
	    cout << res << "\n";
	}

}