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
    long long n,m,a,b,c;
    while(cin >> n >> m){
        a = (n*2)/m;
        b = (n*5)/m;
        c = (n*8)/m;
        if(n*2 %m)  a++;
        if(n*5 %m)  b++;
        if(n*8 %m)  c++;
        cout << (a+b+c) << "\n";
    }
    
 
    return 0;
}