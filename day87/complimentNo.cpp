#include <bits/stdc++.h>
using namespace std;

int findComplement(int num) {
        string bin = "";
        while (num > 0) {
            int dig = num % 2;
            bin = to_string(dig) + bin ;
            num /= 2;
        }
        string result = "";
        for (char i : bin) {
            if (i == '0') {
                result += '1';
            } else {
                result += '0';
            }
        }
        return stoi(result, nullptr, 2);
    }
int main() {
    int num = 5;
    cout << findComplement(num);
    return 0;
}