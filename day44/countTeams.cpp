#include<bits/stdc++.h>
using namespace std;

int numTeams(vector<int>& rating) {
        int n = rating.size() ;
        int result = 0 ;
        for(int i = 0 ; i < n; i++){
            for(int j = i+1 ; j < n ; j++){
                for(int k = j+1 ; k <n ; k++){
                    if((rating[i] > rating[j] && rating[j] > rating[k]) || (rating[i] < rating[j] && rating[j] < rating[k])  ){
                        result++;
                    }
                }
            }
        }
        return result;
    }

int main() {
    vector<int> rating = {2, 5, 3, 4, 1};
    cout << "Number of Teams: " << numTeams(rating) << endl;
    return 0;
}