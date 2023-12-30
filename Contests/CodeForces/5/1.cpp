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
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        char al,num;
        for(int i=0;i<2;i++){
            i%2 ? num = a[i] : al = a[i];
        }
        int n = num - '0';
        //cout << al << num << endl;
        for(int i=1;i<=8;i++){
            string sol = al + to_string(i);
            if(i != n){
                cout << sol << "\n";
            }
        }
        for(char i = 'a';i<='h';i++){
            //string first = static_cast<char>(i);
            string character(1, i);
            string sol = character + num;
            if(i != al){
                cout << sol << "\n"; 
            }
        }
    }

    return 0;
}