#include<bits/stdc++.h>
using namespace std ;

int titleToNumber(const string& s) {
        long long res = 0;
        for (char c : s) {
            res = res * 26 + (c - 'A' + 1);
        }
        return (int)res;
    }

int main() {
    string s = "AAB" ;
    cout<<titleToNumber(s);
    return 0 ;
}