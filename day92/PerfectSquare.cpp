#include<bits/stdc++.h>
using namespace std ;

bool isPerfectSquare(int num) {
        double numi = sqrt(num) ;
        return numi == round(numi) ;
    }

int main() {
    cout<<isPerfectSquare(14) ;
    return 0 ;
}