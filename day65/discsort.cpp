#include<bits/stdc++.h>
using namespace std;

int minCostToMoveChips(vector<int>& position) {
        int odd = 0 ;
        int even = 0 ;
        for(int i : position){
            if(i % 2 == 0)even++;
            else odd++;
        }
        return min(odd,even) ;
    }

int main() {
    vector<int> position = {1, 2, 3};
    cout << minCostToMoveChips(position) << endl;
    return 0;
}