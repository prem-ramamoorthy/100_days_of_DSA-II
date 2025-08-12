#include<bits/stdc++.h>
using namespace std ;

string reverseOnlyLetters(string s) {
        vector<char> res;
        int n = s.size() ;
        for(int i = 0 ; i < n ; i++){
            if(isalpha(s[i])){
                res.push_back(s[i]) ;
            }
        }
        reverse(res.begin() , res.end() ) ;
        string result = "" ;
        int it = 0 ;
        for(int i = 0 ; i < n ; i ++){
            if(!isalpha(s[i])){
                result += s[i] ;
            }
            else{
                result += res[it] ;
                it++;
            }
        }
        return result;
}

int main () {
    string s = "ab-cd";
    cout << reverseOnlyLetters(s) << endl;
    return 0 ;
}