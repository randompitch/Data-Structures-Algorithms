/*
Panoramix's Prediction (80A)
Codeforces
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void Seive(int n,vector<int> &primes)
{
    int prime[100]={0};
    
    for(int i=2; i<=n; i++){
        if (prime[i]==0){
            for (int j = i*i; j<=n; j+=i){
                prime[j]=1;
            }
        }
    }

    for(int i=2; i<=n; i++){
        if (prime[i]==0){
            primes.push_back(i);
        }
    }
    
}
 
int main()
{
    vector<int> primes;
    Seive(50,primes);    
    int n1,n2;
    cin >> n1 >> n2;
    bool fo = false;
    for(int i = 0; i < primes.size(); i++){
        if ( primes[i] == n1 && primes[i+1] == n2 ){
            fo = true;
        }
    }  
    fo ? cout << "YES" : cout << "NO";
 
    return 0;
}