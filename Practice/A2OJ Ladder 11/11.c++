/*
Array Coloring
Codeforces Round 891 7 Aug 2023
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;  cin >> n;
        int sum = 0;
        vector<int> arr;
        for (int i = 0; i < n; ++i) {
            int item;   cin >> item;
            sum += item;
            arr.push_back(item);
        }
        if(sum % 2 == 0)    cout << "YES" << endl;
        else        cout << "NO" << endl;
    }
    //cout << "Even: " << even << endl;
    //cout << "Odd: " << odd << endl;
    
 
    return 0;
}