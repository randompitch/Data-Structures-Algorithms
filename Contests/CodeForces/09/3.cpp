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
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;      cin >> n;
        int odd{0}, even{0}, sum{0};
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin >> vec[i];
            if(vec[i] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
            sum += vec[i];
            if(i==0){
                cout << sum << " ";
                continue;
            }
            if(i==1){
                cout << sum - (sum % 2) << " ";
                continue;
            }
            int m = odd % 3;
            int d = odd / 3;
            if(m == 1)      d++;
            cout << sum - d << " ";
        }
        cout << "\n";
    }

    return 0;
}