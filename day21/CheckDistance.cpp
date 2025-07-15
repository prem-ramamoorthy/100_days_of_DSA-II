#include<bits/stdc++.h> 
using namespace std ;

bool checkDistances(string s, vector<int>& distance) {
        vector<int> firstIndex(26, -1) ;
        for(int i = 0 ; i < s.size() ; i++){
            int ch = s[i] - 'a' ;
            if(firstIndex[ch] == -1){
                firstIndex[ch] = i ;
            }
            else{
                int actdistance = i - firstIndex[ch] -1 ;
                if(actdistance != distance[ch]) {
                    return false ;
                }
            }
        }
        return true ;
    }

int main() {
    vector<int> distance = {1,3,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} ;
    cout<<checkDistances("abaccb" , distance) ;
    return 0 ;
}