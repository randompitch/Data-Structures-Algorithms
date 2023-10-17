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
        int n;  cin >> n;
        vector<int> v(n);
        vector<int> b(n);        
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        v[0] == 1 ? b[0] = 2 : b[0] = v[0]-1;
        for(int i=1;i<n;i++){ 
            if((b[i-1]+1) != v[i]){
                b[i] = b[i-1] + 1;
            }
            else{
                b[i] = b[i-1] + 2;
            }
        }
        cout << b[n-1] << endl;
    }
 
    return 0;
}