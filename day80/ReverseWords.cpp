#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
        vector<string> words ;
        string word = "" ;
        for(int i = 0 ; i < s.size() ;i++){
            if(s[i] == ' ' && word != "") {
                words.push_back(word) ;
                word = "" ;
            }
            else if(s[i] != ' '){
                word += s[i] ;
            }
        }
        if(word != ""){
            words.push_back(word) ;
            word = "" ;
        }
        reverse(words.begin() , words.end() ) ;
        string result = "" ;
        for( int i = 0 ; i < words.size()-1 ; i++ ){
            result +=words[i] ;
            result += ' ' ;
        }
        result += words[words.size()-1] ;
        return result ;
    }

int main() {
    string s = "  hello world  ";
    cout << reverseWords(s) << endl; // Output: "world hello"
    return 0;
}