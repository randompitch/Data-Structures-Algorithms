/*
Word (55A)
Codeforces
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string word;    cin >> word;
    int up = 0, low = 0;
    int len = word.length();
    for(int i = 0; i<len; i++){
        if(word[i] >= 65 && word[i] < 91){
            up++;
        }
        else {
            low++;
        }
    }
    if(low < up){
        for(int i = 0; i < len; i++) {
            word[i] = toupper(word[i]);
        }
    }
    else{
        for(int i = 0; i < len; i++) {
            word[i] = tolower(word[i]);
        }
    }
    cout << word;

  
    return 0;
}