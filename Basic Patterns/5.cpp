/*
    * * * * *
    * * * *
    * * *
    * *
    * 
*/

#include <iostream>
using namespace std;

int main()
{
    for(int i=5; i>0; i--){
        for(int j=i; j>=1; j--){
            cout << "* ";
        }
        cout << "\n";
    }
  
    return 0;
}