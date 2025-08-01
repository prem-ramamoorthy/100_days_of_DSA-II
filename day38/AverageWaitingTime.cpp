#include<bits/stdc++.h>
using namespace std ;

double averageWaitingTime(vector<vector<int>>& customers) {
        double result = 0 ; 
        vector<int> ct ;
        int prevcompletion = customers[0][0] ; 
        for(auto i : customers){
            if(prevcompletion < i[0]) {
                prevcompletion = i[0] ;
            }
            prevcompletion += i[1] ;
            ct.push_back(prevcompletion - i[0]) ;
        }
        for(int i : ct){
            result += i ;
        }
        result /= ct.size() ;
        return result ;
    }

int main(){
    vector<vector<int>> customers = {{1,2},{2,5},{4,3},{5,4}} ;
    cout << averageWaitingTime(customers) << endl;
    return 0 ;
}