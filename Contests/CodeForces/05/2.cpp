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

//GAVE TLE WILL COME BACK TO IT LATER

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string input;    cin >> input;
        vector<char> sen;

        for (char c : input) {
            if (c == 'b') {
                for (int i = sen.size() - 1; i >= 0; --i) {
                    if (islower(sen[i])) {
                        sen.erase(sen.begin() + i);
                        break;
                    }
                }
            } else if (c == 'B') {
                for (int i = sen.size() - 1; i >= 0; --i) {
                    if (isupper(sen[i])) {
                        sen.erase(sen.begin() + i);
                        break;
                    }
                }
            } else {
                sen.push_back(c);
            }
        }
        string result(sen.begin(), sen.end());
        cout << result << "\n";
    }


    return 0;
}