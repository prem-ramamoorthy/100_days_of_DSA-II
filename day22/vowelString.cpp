#include<bits/stdc++.h> 
using namespace std ;

int vowelStrings(vector<string>& words, int left, int right) {
        int result = 0;
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        for (int i = left; i <= right; i++) {
            if (find(vowels.begin(), vowels.end(), words[i][0]) !=
                vowels.end()) {
                if (find(vowels.begin(), vowels.end(),
                         words[i][words[i].size() - 1]) != vowels.end()) {
                    result++;
                }
            }
        }
        return result ;
    }

int main() {
    vector<string> words = {"are","amy","u"} ;
    cout<<vowelStrings(words , 0 , 2) ;
    return 0 ;
}