#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    vector<int> a(t);
    for(int i=0;i<t;i++){
        cin >> a[i];
    }
    for(int i=0; i<t; i++){
        int minIdx = i;
        for(int j=i+1; j<t; j++){
            if(a[j] < a[minIdx]){
                minIdx = j;
            }
        }
        swap(a[i] , a[minIdx]);
    }
    for(int i=0;i<t;i++){
        cout << a[i] << " ";
    }
 
    return 0;
}