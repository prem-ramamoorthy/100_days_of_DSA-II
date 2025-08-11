#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices, int fee) {
        int curr = -prices[0] ;
        int maxi = 0 ;
        for(int i =1 ; i < prices.size() ; i++){
            curr = max(curr , maxi-prices[i]) ;
            maxi = max(maxi , prices[i] + curr - fee ) ;
        }
        return maxi ;
    }

int main() {
    vector<int> prices = {1, 3, 2, 8, 4, 9};
    int fee = 2;
    cout << "Max profit: " << maxProfit(prices, fee) << endl;
    return 0;
}