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

bool solve(vector<ll> &arr){
    ll sum = 0;
    unordered_set<ll> s;
    for(int i=0;i<arr.size();i++){
        sum += arr[i];
        if(sum == 0 || s.find(sum) != s.end())  return true;
        s.insert(sum); 
    }
    return false;

}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<ll> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(i%2)    vec[i] = -vec[i];
        }  
        if(solve(vec))    cout << "YES\n";
        else        cout << "NO\n";

    }

    return 0;
}