#include <bits/stdc++.h>
using namespace std ;

int hammingDistance(int x, int y) {
        string x1 = "" ;
        if (x == 0) x1 = "0";
        while(x>0){
            x1=to_string(x%2)+x1 ;
            x /=2 ;
        }
        string y1 = "" ;
        if (y == 0) y1 = "0";
        while(y>0){
            y1=to_string(y%2)+y1 ;
            y /=2 ;
        }
        int n1 = x1.size() ;
        int n2 = y1.size() ;
        if(n1 < n2){
            x1 = string(n2 - n1, '0') + x1;
        }
        else if(n2 < n1){
            y1 = string(n1 - n2, '0') + y1;
        }
        int res = 0 ;
        for(int i = 0 ; i < x1.size() ;i++){
            if(x1[i] != y1[i]){
                res ++ ;
            }
        }
        return res ;
    }

int main() {
    int x1 = 1 ;
    int x2 = 4 ;
    cout<<hammingDistance(x1 , x2) ;
    return 0 ;
}