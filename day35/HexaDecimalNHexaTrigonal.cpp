#include<bits/stdc++.h>
using namespace std;

string toBase(int number, int base) {
        string result = "";
        while (number > 0) {
            int digit = number % base;
            if (digit < 10)
                result += ('0' + digit);
            else
                result += ('A' + digit - 10);  
            number /= base;
        }
        reverse(result.begin(), result.end());
        return result;
    }

    string concatHex36(int n) {
        int num1 = n * n;
        int num2 = n * n * n;
        
        string hexPart = toBase(num1, 16); 
        string base36Part = toBase(num2, 36); 
        
        return hexPart + base36Part;
    }

int main() {
    for (int i = 1; i <= 10; ++i) {
        cout << "n = " << i << ": " << concatHex36(i) << endl;
    }
    return 0;
}