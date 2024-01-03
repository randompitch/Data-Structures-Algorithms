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
	int t;  cin >> t;
	while(t--){
	    int n;  cin >> n;
	    
	    vector<int> a(n);
	    vector<int> b(n);
	    for(int i=0;i<n;i++)    cin >> a[i];
	    for(int i=0;i<n;i++)    cin >> b[i];
	    sort(a.begin(), a.end());
	    sort(b.begin(), b.end());
	    reverse(b.begin(), b.end());
	    
	    set<int> uniq;
	    for(int i=0;i<n;i++)    uniq.insert(a[i] + b[i]);
	    
	    if(uniq.size() == 1){
	        for(int &i: b)      cout << i << " ";
	        cout << "\n";
	        for(int &i: a)      cout << i << " ";
            cout << "\n";
	    }
	    else    cout << -1 << "\n";
	    
	}

}
