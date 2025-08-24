#include<bits/stdc++.h>
using namespace std ;

int maxPower(string s) {
        int maxi = 0 ;
        int curr = 0 ;
        for(int i = 1 ; i < s.size() ; i++){
            if(s[i] == s[i-1]){
                curr++;
            }
            else{
                maxi = max(maxi , curr+1) ;
                curr = 0 ;
            }
        }
        maxi = max(maxi , curr+1) ;
        return maxi ;
    }

int main() {
    string s;
    cin >> s;
    cout << maxPower(s) << endl;
    return 0;
}