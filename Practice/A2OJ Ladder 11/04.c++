/*
Borze (32B)
Codeforces
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string code;    cin >> code;
    vector<int> ans;
    int len = code.length();
    for(int i=0; i<len; i++){
        if(code[i] == '.'){
            ans.push_back(0);
        }
        else if(code[i] == '-' && code[i+1] == '.'){
            ans.push_back(1);
            i++;
        }
        else{
            ans.push_back(2);
            i++;
        }
    }
    for(int i=0;i<ans.size(); i++){
        cout << ans[i];
    }  
    return 0;
}