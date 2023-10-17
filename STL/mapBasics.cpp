#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <map>
using namespace std;
 
void printMap(map<int,string> &m){
    cout << "Size of map = " << m.size() << endl;
    for(auto &ele : m){
        cout << ele.first << " " << ele.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "adc";
    m.insert({4, "afg"});
    printMap(m);
    m[5] = "megha";
    printMap(m);
    //auto it = m.find(3);
    auto it = m.find(7);
    if(it == m.end()){
        cout << "Value not in map." << endl;
    }
    else{
        cout << "Found      ";
        cout << it->first << " " << it->second << endl;
    }

    // m.erase(iterator)      Deletes the entry in map with key = iterator
    // m.clear()              Deletes all entries in the map   
    return 0;
}