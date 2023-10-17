#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;

void printSet(set<string> &s){
    for(auto &it: s){
        cout << it << endl;
    }
}

int main()
{
    set<string> s;
    s.insert("Megha"); //O(logn)
    s.insert("Meg");
    s.insert("Megs");
    auto it = s.find("Meg");
    printSet(s);
    if(it != s.end()){
        cout << *it;
    }

    return 0;
}