#include<bits/stdc++.h>
using namespace std ;

int splitNum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        string num1 = "", num2 = "";
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0)
                num1 += s[i];
            else
                num2 += s[i];
        }
    }

int main(){
    cout<<splitNum(212) ;
    return 0 ;
}