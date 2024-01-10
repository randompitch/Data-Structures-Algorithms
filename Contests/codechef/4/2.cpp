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
    // your code goes here
	int t;
	cin >> t;
	while(t--){
        int cnt = 0;
        bool flag = false;
	    for(int i=0;i<6;i++){
	        char n;
	        cin >> n;
	        if(n=='W'){
	            cnt++;
	            if(cnt==3){
                    flag = true;
                    break;
	            }
	        }
	        else{
	            cnt=0;
	        }
	    }
	    if(flag)    cout << "YES\n";
	    else        cout << "NO\n";
	}

    return 0;
}