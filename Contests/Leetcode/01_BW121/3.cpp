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
#include <limits.h>
using namespace std;
 
typedef long long ll;

class Solution {
public:
    int minimumOperationsToMakeEqual(int x, int y) {
        queue<int> q;
        q.push(x);
        int ans=0;
        set<int> vis;
        while(q.size()){
            int sz = q.size();
            for(int i=0;i<sz;i++){
                int k = q.front();
                q.pop();
                if(k>10000 || k<0){
                    continue;
                }
                if(k==y)    return ans;
                if(k%11 == 0 && vis.find(k/11) == vis.end()){
                    vis.insert(k/11);
                    q.push(k/11);
                }
                if(k%5 == 0 && vis.find(k/5) == vis.end()){
                    vis.insert(k/5);
                    q.push(k/5);
                }
                if(k>0 && vis.find(k-1) == vis.end()){
                    vis.insert(k-1);
                    q.push(k-1);
                }
                if(vis.find(k+1) == vis.end()){
                    vis.insert(k+1);
                    q.push(k+1);
                }
            }
            ans++;
        }
        return ans;
    }
};
 
int main()
{
    
    return 0;
}