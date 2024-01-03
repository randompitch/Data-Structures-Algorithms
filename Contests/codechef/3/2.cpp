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
    // your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    cout << n/2 + n%2 << " " << n << "\n";
	}
}