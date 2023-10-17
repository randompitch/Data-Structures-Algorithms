#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;
 
void printMap(unordered_map<int,string> &m){
    cout << "SIZE: " << m.size() << endl;
    for(auto &it: m){
        cout << it.first << " " << it.second << endl;
    }
}

int main()
{
    unordered_map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "adc";
    m.insert({4, "afg"});
    printMap(m);
 
    return 0;
}