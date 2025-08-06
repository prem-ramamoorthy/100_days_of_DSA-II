#include <bits/stdc++.h>
using namespace std;

int countSubstrings(string s) {
        int result = 0 ;
        int n = s.size() ;
        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j < n ; j++){
                string s1 = s.substr(i, j - i + 1);
                string s2 = s1 ;
                reverse(s2.begin() , s2.end() ) ;
                if(s2 == s1){
                    result++ ;
                }
            }
        }
        return result ;
    }

int main() {
    string s = "abcba";
    cout << "Count of Palindromic Substrings: " << countSubstrings(s) << endl;
    return 0;
}