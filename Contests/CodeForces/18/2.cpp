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
    while (t--)
    {
        int n;  cin >> n;
        vector<int> v(n);
        int sum = 0;
        int cn = 0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            sum += v[i];
            if(v[i]%3 == 1)     cn = 1;
        }
        if(sum%3 == 0){
            cout << "0\n";
        }
        else{
            int p = sum%3;
            if(p==2){
                cout << "1\n";
            }
            else if(cn){
                cout << "1\n";                
            }
            else{
                cout << "2\n";
            }
        }
    }
    

    return 0;
}