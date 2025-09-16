#include <bits/stdc++.h>
using namespace std ;

string replaceWords(vector<string>& dictionary, string sentence) {
        vector<string> words;
        string word = "";
        sort(dictionary.begin(), dictionary.end(),
         [](const string& a, const string& b){ return a.size() < b.size(); });
        for (char i : sentence) {
            if (i == ' ' && word.size() > 0) {
                words.push_back(word);
                word = "";
            } else {
                word += i;
            }
        }
        if (word.size() > 0) {
            words.push_back(word) ;
        }
        vector<string> result;
        for(string i : words){
            bool found = false ;
            for(string j : dictionary){
                if(i.size() >= j.size() && i.rfind(j, 0) == 0){
                    result.push_back(j) ;
                    found = true ;
                    break ;
                }
            }
            if(!found){
                result.push_back(i) ;
            }
        }
        string res = "" ;
        int n = result.size() ;
        for(int i = 0 ; i < n ; i++){
            if(i != n-1){
                res += result[i] ;
                res += ' ' ;
            }
            else{
                res += result[i] ;
            }
        }
        return res ;
    }

int main() {
    vector<string> dict = {"cat","bat","rat"} ;
    string sentence = "the cattle was rattled by the battery" ;
    string result = replaceWords( dict , sentence) ;
    cout<< result ;
    return 0 ;
}