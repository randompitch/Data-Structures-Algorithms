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

int minop(){
    int m,n;
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        int op = 0;
        if(n)
        while(x.length() <= s.length()*n){
            //cout << "x: "<< x << endl;
            if(x.find(s) != string::npos){
                return op;
            }
            x += x;
            op++;
        }
        return (x.find(s) != string::npos) ? op : -1;
}
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        cout << minop() << endl;       
    }
 
    return 0;
}