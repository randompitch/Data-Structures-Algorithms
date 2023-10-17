/*  Given a 2D array of N*N integers. Given Q queries
    and in each query given a,b,c and d print sum of 
    square represented by (a,b) as top left point and
    (c,d) as bottom right point.
    CONSTRAINTS : 1 <= N <= 10^3
                  1 <= Q <= 10^5 
                  1 <= a[i][j] <= 10^9 
                  1 <= a,b,c,d <= N 
*/

#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

const int N = 1e3+10;
int arr[N][N];
long long int pfS2D[N][N];

int main()
{
    int n;  cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> arr[i][j];
            pfS2D[i][j] = arr[i][j] + pfS2D[i-1][j] + pfS2D[i][j-1] - pfS2D[i-1][j-1];
        }
    }
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << pfS2D[c][d] - pfS2D[a-1][d] - pfS2D[c][b-1] + pfS2D[a-1][b-1] << endl;
    }
 
    return 0;
}