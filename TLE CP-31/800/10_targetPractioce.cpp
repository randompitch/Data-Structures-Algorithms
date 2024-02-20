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
        vector<vector<char>> v(11, vector<char>(11,'.'));
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                cin >> v[i][j];
            }
        }
        int ans = 0;

        for(int i=1;i<11;i++){
            for(int j=1;j<=10;j++){
                if((i==1 || i==10 || j==1 || j==10) && v[i][j] == 'X')         ans += 1;
                else if((i==2 || i==9 || j==2 || j==9) && v[i][j] == 'X')      ans += 2;
                else if((i==3 || i==8 || j==3 || j==8) && v[i][j] == 'X')      ans += 3;
                else if((i==4 || i==7 || j==4 || j==7) && v[i][j] == 'X')      ans += 4;
                else if((i==5 || i==6 || j==5 || j==6) && v[i][j] == 'X')      ans += 5;
            }
        }        
        cout << ans << "\n";
    }

    return 0;
}