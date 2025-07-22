#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size() ;
        vector<vector<int>> result(n) ;
        map<int, int > kthscore ;
        for(int i = 0 ; i < n ; i++){
            kthscore[score[i][k]] = i ;
        }
        for(auto i : kthscore){
            result[n-1] = score[i.second] ;
            n--;
        }
        return result ;
    }

int main(){
    vector<vector<int>> score = {{10,6,9,1},{8,5,6,2},{9,8,7,3}} ;
    int k = 2 ;
    vector<vector<int>> result = sortTheStudents(score, k) ;
    for(auto i : result){
        for(auto j : i){
            cout << j << " " ;
        }
        cout << endl ;
    }
    return 0 ;
}