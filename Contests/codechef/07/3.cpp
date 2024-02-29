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
    while(t--){
        int n,q;
        cin >> n >> q;
        int sum = 0;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
            sum += v[i];
        }
        while(q--){
            int x;  cin >> x;
            bool flag = 0;
            for(int i=0;i<n;i++){
                for(int j=i+1; j<n;j++){
                    int temp = sum -v[i] - v[j];
                    temp *= 2;
                    temp += (v[i] + v[j]);
                    if(temp == x){
                        cout << v[i] << " ";
                        for(int k=0; k<n; k++){
                            if(k!=i && k!=j){
                                cout << v[k] << " ";
                            }
                        }
                        cout << v[j] << "\n";
                        flag = 1;
                        break;

                    }
                }
                if(flag == 1)   break;
            }
            if(flag == 0){
                cout << "-1\n";
            }
        } 
    }

    return 0;
}