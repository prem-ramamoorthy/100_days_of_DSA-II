#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
        int rev = 0, temp = x;
        while(temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        return rev == x;
    }

    bool isPrime(int x) {
        if(x < 2) return false;
        if(x == 2) return true;
        if(x % 2 == 0) return false;
        for(int i = 3; i * i <= x; i += 2) {
            if(x % i == 0) return false;
        }
        return true;
    }

    int primePalindrome(int n) {
        int i = n ;
        while(true){
            if(isPrime(i)){
                if(isPalindrome(i)){
                    return i ;
                }
            }
            i++;
        }
        return -1 ;
    }

int main() {
    int n = 6;
    int result = primePalindrome(n);
    return 0 ;
}