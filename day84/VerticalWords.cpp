#include <bits/stdc++.h>
using namespace std ;

vector<string> printVertically(string s) {
        vector<string> words;
        string word = "";
        for (char i : s) {
            if (i == ' ' && word != "") {
                words.push_back(word);
                word = "";
            } else {
                word += i;
            }
        }
        if(word != "") words.push_back(word) ;
        int n = words.size() ;
        int maxsize = -1 ;
        for(int i = 0 ; i < n ;i++){
            int n1 = words[i].size() ;
            if(maxsize < n1){
                maxsize = n1 ;
            }
        }
        for(int i = 0 ; i < n ;i++){
            string reps(maxsize - words[i].size() , ' ') ;
            words[i] = words[i] + reps ;
        }
        vector<string> result ;
        for(int i = 0 ; i < maxsize ; i++){
            string res = "" ;
            for(int j = 0 ; j < n ; j++){
                res += words[j][i] ;
            }
            while (!res.empty() && isspace(static_cast<unsigned char>(res.back()))) {
        res.pop_back();
    }
            result.push_back(res) ;
        }
        return result ;
    }

int main() {
    string word = "TO BE OR NOT TO BE" ;
    vector<string> result = printVertically(word) ;
    for(auto i : result){
        cout<<i<<endl ;
    }
    return 0 ;
}