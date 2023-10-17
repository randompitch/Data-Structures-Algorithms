/*  Given N strings, print the unique strings in 
    lexographical order with their frequency.
*/

#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <map>
using namespace std;

void printMap(map<string,int> &m){
    for(auto &it: m){
        cout << it.first << " " << it.second << endl; 
    }
}
 
int main()
{
    int t;
    cin >> t;
    vector<string> vs;
    for(int i=0;i<t; i++){
        string s;
        cin >> s;
        vs.push_back(s);
    }
    map<string, int> m;
    for(auto &it : vs){
        m[it] += 1;
    }
    cout << "OUTPUT: " << endl;
    printMap(m);

 
    return 0;
}