#include <iostream>
using namespace std;

bool canMakeZero(int n) {
    if (n == 0) {
        return true;
    }
    if (n < 0) {
        return false;
    }
    return canMakeZero(n - 3) || canMakeZero(n - 4);
}

int main() {
	// your code goes here
	int t;  cin >> t;
	while(t--){
	    int n;  cin >> n;
	    if(canMakeZero(n)){
	        cout << "YES" << "\n";
	    }
	    else{
	        cout << "NO" << "\n";
	    }
	}
	return 0;
}