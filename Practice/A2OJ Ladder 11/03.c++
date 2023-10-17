/*
Queue at the School (266B)\
Codeforces
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;  cin >> n;
    int t;  cin >> t;
    vector<char> q;
    for(int i=0;i<n;i++){
        char s; cin >> s;
        q.push_back(s);
    }
    while(t--){
        for(int i=0;i<n;i++){
            if(q[i] == 'B' && q[i+1] == 'G'){
                q[i] = 'G';
                q[i+1] = 'B';
                i++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << q[i];
    } 

    return 0;
}