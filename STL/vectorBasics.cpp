#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
 
void printVec(vector<int> &v){
    cout << "Vector is:- " << endl;
    cout << "Size: " << v.size() << endl;
    for(int n: v){
        cout << n << " "; 
    }
    cout << endl;
}

void printVec(vector<pair<int,int>> &v){
    cout << "Vector is:- " << endl;
    cout << "Size: " << v.size() << endl;
    for(int i = 0;i<v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl; 
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    int n;  cin >> n;
    for(int i =0;i<n;i++){
        int p; cin >> p;
        v.push_back(p);
    }
    printVec(v);
    vector<int> v2 = v; // copy of vector v.
    vector<int> &v3 = v; // not a copy of vector v just a refrence to vector v
    v2.push_back(12);
    v.pop_back();
    cout << "Vector v:";printVec(v);
    cout << "Vector v2:";printVec(v2);
    v3.push_back(19782);
    cout << "Vector v:"; printVec(v);
    cout << "Vector v3:"; printVec(v3);
    vector<int> v1(10,3);
    printVec(v1);
    
    cout << endl << "Nesting in vectors:--" << endl;
    
    vector<pair<int,int>> vp{{1,2}, {2,3}, {3,5}};
    printVec(vp);
    cout << "Enter number of pairs to be added to vector of pair:";
    int s;  cin >> s;
    while(s--){
        int x,y;
        cin >> x >> y;
        vp.push_back({x,y});
    }
    printVec(vp);

    vector<vector<int>> vv; 
    int vvs;    cout << "Enter number of vectors to be added: ";
    cin >> vvs;
    for(int i=0;i<vvs;i++){
        int ivs;    cout << "Enter number of elements in vector",i+1;
        cin >> ivs;
        cout << "Enter elements: ";
        vector<int> vec;
        for(int j=0;j<ivs;j++){
            int x;  cin >> x;
            vec.push_back(x);
        }
        vv.push_back(vec);
    }
    for(int i=0;i<vv.size();i++){
        printVec(vv[i]);
    }

    return 0;
}