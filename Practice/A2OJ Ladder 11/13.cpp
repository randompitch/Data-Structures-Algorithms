/*
Ultra-Fast Mathematician (61A)
Codeforces
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    string t1, t2;
    cin >> t1 >> t2;
    for(int i=0; i < t1.length(); i++ ){
        (t1[i] == t2[i]) ? t1[i] = '0' : t1[i] = '1';
    }
    cout << t1 << endl;
    
 
    return 0;
}