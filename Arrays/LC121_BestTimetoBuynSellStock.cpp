#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrices = prices[0];
        int maxProf = 0;
        for(int i =0;i<prices.size(); i++){
            maxProf = max(maxProf, prices[i]-minPrices);
            minPrices = min(minPrices, prices[i]);
        }
        return maxProf;               
    }
};