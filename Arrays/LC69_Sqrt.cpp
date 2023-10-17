#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)    return x;
        int mid, start = 1, end = x;
        while(start <= end){
            mid = start + (end - start)/2;
            long long sq = static_cast<long long>(mid) * mid;
            if(sq == x) return mid;
            if(sq > x)  end = mid-1;
            else    start = mid+1;
        }
        return end;
    
    }
};