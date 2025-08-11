#include<bits/stdc++.h>
using namespace std;

bool stoneGame(vector<int>& piles) {
        sort(piles.begin() , piles.end() , greater<int> ()) ;
        int n = piles.size() ;
        int alice = 0 ;
        int bob = 0 ;
        for(int i = 0 ; i < n ; i+=2){
            alice += piles[i] ;
            bob += piles[i+1] ;
        }
        return alice >= bob ;
    }

int main() {
    vector<int> piles = {5, 3, 4, 5};
    cout << (stoneGame(piles) ? "Alice" : "Bob") << " wins" << endl;
    return 0;
}