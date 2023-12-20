#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    string sNew;
    for(char c: s){
        if(isalpha(c)){
            sNew.push_back(tolower(c));
        }
    }
    cout << sNew << endl;
    if(sNew.size() == 0)    return true;
    
    int left = 0, right = sNew.size()-1;
    while(left <= right){
        //cout << "1" << endl;
        if(sNew[left] != sNew[right])   return false;
        else{
            left++;
            right--;
        }
        //cout << "2" << endl;
    }
    return true;
    }

int main()
{
    cout << isPalindrome("race a car") << endl;
    cout << isPalindrome("A man, a plan, a canal: Panama") << endl;
  
    return 0;
}