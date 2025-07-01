#include<bit/stdc++.h>  
using namespace std;

string reverseStr(string s, int k) {
        for(int i = 0 ; i < s.size() ; i += k){
            int end = min(i+k , n) ;
            reverse(s.begin() +i , s.begin() + end) ;
        }
        return s ;
    }

int main() {
    string s = "abcdefg";
    int k = 2;
    cout << reverseStr(s, k) << endl; 
    return 0;
}