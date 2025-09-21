#include <bits/stdc++.h>
using namespace std;

string sortVowels(string s) {
        vector<char> chars(s.begin() , s.end());
        vector<char> vowels = {'a', 'e' , 'i' , 'o' , 'u'};
        vector<char> vows ;
        for(char i : chars ){
            if(find(vowels.begin() , vowels.end() ,tolower(i)) != vowels.end()){
                vows.push_back(i) ;
            }
        }
        sort(vows.begin() , vows.end() ) ;
        int it = 0 ;
        for(int i = 0 ; i < chars.size() ; i++ ){
            if(find(vowels.begin() , vowels.end() ,tolower(chars[i])) != vowels.end()){
                chars[i] = vows[it] ;
                it++;
            }
        }
        string result = "" ;
        for(char i : chars){
            result += i ;
        }
        return result ;
    }

int main() {
    string s = "lEetcOde" ;
    cout << sortVowels(s) << endl;
    return 0;
}