#include<bits/stdc++.h>
using namespace std ;

string digitSum(string s, int k) {
        while(s.size() > k){
            vector<string> groups ;
            int n = s.size() ;
            string word = "" ;
            for(char i : s){
                word += i ;
                if(word.size() == k){
                    groups.push_back(word) ;
                    word = "" ;
                }
            }
            if(word.size() != 0){
                groups.push_back(word) ;
            }
            s = "" ;
            for(int i = 0 ; i < groups.size() ; i++){
                int sum = 0 ;
                for(char j : groups[i]){
                    sum += (int)j - '0' ;
                }
                s += to_string(sum) ;
            }
        }
        return s ;
    }

int main() {
    string s = "123456789";
    int k = 3;
    string result = digitSum(s, k);
    cout << result << endl;
    return 0 ;
}