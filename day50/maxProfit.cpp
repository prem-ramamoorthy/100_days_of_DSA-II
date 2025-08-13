#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        int mini = prices[0] ;
        int result = 0 ;
        for(int i = 0 ; i < prices.size() ; i++){
            mini = min(prices[i] , mini) ;
            result = max(result , prices[i] - mini) ;
        }
        return result ;
    }

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices) << endl;
    return 0 ;
}