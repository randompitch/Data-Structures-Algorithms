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
        vector<vector<char>> v(11, vector<char>(11, '.'));
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                char p; cin >> p;
                v[i][j] = p;
            }
        }
        int sum = 0;
        for(int i=1;i<=10;i++){ 
            for(int j=1;j<=10;j++){
                if(v[i][j] == 'X'){
                    if(i == 1 || j == 1 || i == 10 || j == 10)  sum+=1;
                    else if(i == 2 || j == 2 || i == 9 || j == 9)  sum+=2;
                    else if(i == 3 || j == 3 || i == 8 || j == 8)  sum+=3;
                    else if(i == 4 || j == 4 || i == 7 || j == 7)  sum+=4;
                    else if(i == 5 || j == 5 || i == 6 || j == 6)  sum+=5;
                }
            }
        }
        cout << sum << endl;
    }
 
    return 0;
}