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
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
 
    return 0;
}