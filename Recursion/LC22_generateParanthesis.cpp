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

vector<string> valid;

void generate(int o, int c, string &s){
    if(o==0 && c==0){
        valid.push_back(s);
        return; 
    }
    if(o>0){
        s.push_back('(');
        generate(o-1,c,s);
        s.pop_back();
    }
    if(c>0){
        if(o<c){
            s.push_back(')');
            generate(o,c-1,s);
            s.pop_back();
        }
    }

}

int main()
{
    int t;
    cin >> t;
    string s = "";
    generate(t,t,s);
    for(int i=0;i<valid.size(); i++){
        cout << valid[i] << " ";
    }
    
 
    return 0;
}