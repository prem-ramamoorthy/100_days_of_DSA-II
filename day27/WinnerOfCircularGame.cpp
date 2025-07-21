#include<bits/stdc++.h>
using namespace std;

int findTheWinner(int n, int k) {
        vector<int> nums ;
        for(int i = 1 ; i <= n ; i++) {
            nums.push_back(i) ;
        }
        int it = 0 ;
        while( nums.size() > 1) {
            it = (it + k -1 ) % nums.size() ;
            nums.erase( nums.begin() + it) ;
        }
        return nums[0] ;
    }

int main() {
    int n = 5, k = 2;
    cout << findTheWinner(n, k) << endl;
    return 0;
}