#include <iostream>
#include <vector>
using namespace std;
#define mod = 1e9+7
vector<int> se;

int pow(int n, int p){
    if(p==1)    return n;
    else{
        return n * pow(n,p-1);
    }
}

int fib(int n){
    if(n==0 || n==1)        return n;
    else        return fib(n-1) + fib(n-2);  
}

int main()
{
    cout << "2 raised to power 4 = " << pow(2,4) << endl;
    cout << "Fibonacci Series first 10 terms are: ";
    int i;
    while(i < 10){
        cout << " " << fib(i);
        i++;
    }    
  
    cout << endl;
    return 0;
}
