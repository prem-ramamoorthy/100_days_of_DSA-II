#include<bits/stdc++.h>
using namespace std ;

int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin() , costs.end()) ;
        int result = 0 ;
        int count = 0 ;
        for(int i = 0 ; i < costs.size() ; i++){
            if(result + costs[i] <= coins){
                result += costs[i] ;
                count++;
            }
        }
        return count ;
    }

int main(){
    vector<int> costs = {1,3,2,4,1} ;
    int coins = 7 ;
    cout << maxIceCream(costs, coins) << endl; 
    return 0 ;
}