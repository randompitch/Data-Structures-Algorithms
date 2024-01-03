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
	long long t;  cin >> t;
	while(t--){
	    long long n,x,y;
	    cin >> n >> x >> y;
	    long long rem = 0;
	    if(y>=3){
	        long long p = min(x,y/3);
	        rem += p;
	        x -= p;
	        y /= 3;
	    }
	    rem += x/2;
	    rem >= n ? cout << "YES\n" : cout << "NO\n";
	}
}
