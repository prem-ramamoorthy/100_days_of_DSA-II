#include <bits/stdc++.h>
using namespace std;

string makeFancyString(string s) {
        string result ;
        for(char i : s){
            int n = result.size() ;
            if(n>=2 && result[n-1] == i && result[n-2] == i){
                continue ;
            }
            result += i ;
        }
        return result ;
    }

int main() {
    string s = "leeetcode";
    string result = makeFancyString(s);
    cout << "The fancy string is: " << result << endl; // Output: "leetcode"
    return 0;
}