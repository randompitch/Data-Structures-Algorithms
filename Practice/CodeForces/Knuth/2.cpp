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
    int n,m;    cin >> n >> m;
    char sqr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++)
            cin >> sqr[i][j];
    }
    int p = -1, q = -1;
    int r,s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(sqr[i][j] == 'B'){
                if(p<0 && q<0){
                    p = i+1;
                    q = j+1;
                }
                r = i+1;
                s = j+1;
            }
        }
    }
    cout << (p+r)/2 << " " << (q+s)/2 << "\n";


 
    return 0;
}