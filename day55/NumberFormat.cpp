#include<bits/stdc++.h>
using namespace std ;

string reformatNumber(string number) {
        string nums = "" ;
        for(char i : number) {
            if(isdigit(i)){
                nums += i ;
            }
        }
        int n = nums.size() ;
        string result = "" ;
        int it = 0 ;
        while(n>0){
            if(n>4){
                result += nums.substr(it,3) ;
                result += '-' ;
                it += 3 ;
                n-=3 ;
            }
            else if(n == 3) {
                result += nums.substr(it,3) ;
                it += 3 ;
                n-=3 ;
            }
            else if(n==4){
                result += nums.substr(it,2) ;
                it += 2 ;
                n-=2 ;
                result += '-' ;
                result += nums.substr(it,2) ;
                n-=2 ;
                it+=2;
            }
            else{
                result += nums.substr(it,2) ;
                it += 2 ;
                n-=2;
            }
        }
        return result ;
    }
int main() {
    string number = "1-23-45 6";
    cout << reformatNumber(number) << endl;
    return 0;
}