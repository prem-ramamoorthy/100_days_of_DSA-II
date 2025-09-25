#include<bits/stdc++.h>
using namespace std ;

int countSegments(string s) {
        vector<string> words ;
        string word = "" ;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ' ' && word != "" ){
                words.push_back(word) ;
                word = "" ;
            } 
            else{
                if(s[i] != ' ')
                word += s[i] ;
            }
        }
        if(word != ""){
            words.push_back(word) ;
        }
        return words.size() ;
    }

int main() {
    cout<<countSegments("hi hello how are you" ) ;
    return 0 ;
}