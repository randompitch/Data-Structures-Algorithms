/* https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/
*/
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
        int n, k;
        cin >> n >> k;
        multiset<long long> s;
        for(int i=0;i<n;i++){
            long long int l;  cin >> l;
            s.insert(l);
        }
        long long totalCandies = 0;
        for(int i=0;i<k;i++){
            auto lastItr = --s.end();
            long long int ct = *lastItr;
            totalCandies += ct;
            s.erase(lastItr);
            s.insert(ct/2);
        }
        cout << totalCandies << endl;
    }
 
    return 0;
}