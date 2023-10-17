/*
Morning Sandwich (1849A)
Codeforces
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int b,c,h;
        cin >> b >> c >> h;
        (b>c+h) ? cout << 2*(c+h)+1 : cout << 2*b-1;
        cout << endl;
    }
 
    return 0;
}