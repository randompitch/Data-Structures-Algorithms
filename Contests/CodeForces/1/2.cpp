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
        vector<int> a;
        int mul = 1;
        for(int i=0;i<n;i++){
            int z; cin >> z;
            a.push_back(z);
        }
        sort(a.begin(), a.end());
        a[0] += 1;
        for(auto i: a){
            mul*=i;
        } 
        cout << mul << endl;

    }
 
    return 0;
}