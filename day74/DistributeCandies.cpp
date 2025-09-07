#include<bits/stdc++.h>
using namespace std ;

int distributeCandies(vector<int>& candyType) {
        set<int> uniq(candyType.begin() , candyType.end()) ;
        int n  = candyType.size() / 2 ;
        int res = 0 ;
        for(int i = 0 ; i < uniq.size() ; i++){
            if(res < n){
                res++ ;
            }
        }
        return res ;
    }

int main() {
    vector<int> candyType = {1, 1, 2, 2, 3, 3};
    int result = distributeCandies(candyType);
    cout << "Maximum number of different candies: " << result << endl;
    return 0 ;
}