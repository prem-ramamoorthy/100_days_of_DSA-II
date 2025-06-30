#include<bits/stdc++.h>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
        map<int,int ,greater<int>> hash ;
        int n1 = score.size() ;
        for(int i = 0 ; i < n1 ;i++){
            hash[score[i]] = i ;
        }
        int rank = 1 ;
        vector<string> result(n1) ;
        for(auto i : hash){
            int s = i.first ;
            int ind = i.second ;
            if(rank == 1) {
                result[ind]= "Gold Medal"  ;
            }
            else if(rank == 2){
                result[ind] = "Silver Medal" ;
            }
            else if(rank == 3){
                result[ind] = "Bronze Medal" ;
            }
            else{
                result[ind] = to_string(rank);
            }
            rank ++ ;
        }
        return result ;
    }

int main() {
    vector<int> score = {5, 4, 3, 2, 1};
    vector<string> result = findRelativeRanks(score);
    for (const string& rank : result) {
        cout << rank << " ";
    }
    cout << endl;
    return 0;
}