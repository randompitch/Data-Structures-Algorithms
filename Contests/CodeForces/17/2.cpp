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
        int n;  cin >> n;
        vector<vector<char>> matrix(n, vector<char>(n, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> matrix[i][j];
            }
        }
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(matrix[i][j] == '1'){
                    cnt++;
                }
            }
            //cout << cnt ;
            s.insert(cnt);
        }
        if(s.size() <= 2){
            cout << "SQUARE\n";
        }
        else{
            cout << "TRIANGLE\n";
        }
    }

    return 0;
}