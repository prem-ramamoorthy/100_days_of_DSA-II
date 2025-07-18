#include<bits/stdc++.h>
using namespace std ;

int canBeTypedWords(string text, string brokenLetters) {
        int count = 0 ; 
        vector<string> words ;
        int n = text.size() ;
        string word = "" ;
        for(int i = 0 ; i < n ; i++){
            if(text[i] == ' '){
                if(!word.empty())
                    words.push_back(word);
                word = "";
            }
            else{
                word += text[i];
            }
        }
        if(!word.empty())
            words.push_back(word);
        for(string i : words){
            bool broken = false ;
            for(char j : brokenLetters ){
                if (find(i.begin() , i.end() , j) != i.end() ){
                    broken = true ;
                }
            }
            if(!broken){
                count++;
            }
        }
        return count ;
    }

int main() {
    cout<<canBeTypedWords("hello world" , "ad") ;
    return 0 ;
}