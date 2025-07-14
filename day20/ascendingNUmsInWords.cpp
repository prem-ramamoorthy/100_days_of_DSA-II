#include<bits/stdc++.h > 
using namespace std ;

bool areNumbersAscending(string s) {
        vector<int> nums ;
        string num = "" ;
        for(int i = 0 ; i < s.size() ; i++){
            if(isdigit(s[i])) {
                num += s[i] ;
            }
            if(num != "" && (s[i] == ' ' || i == s.size() - 1)){
                nums.push_back(stoi(num)) ;
                num = "" ;
            }
        }
        int prev = -1 ;
        for(int i : nums){
            if(prev == -1){
                prev = i ;
            }
            else{
                if(prev >= i){
                    return false ;
                }
                prev = i ;
            }
        }
        return true ;
    }

int main () {
    cout<<areNumbersAscending("hello world 5 x 5") ;
    return 0 ; 
}