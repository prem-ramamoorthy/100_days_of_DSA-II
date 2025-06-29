#include <bits/stdc++.h>
using namespace std;

string convertToBase7(int num) {
        string s = "";
        if (num == 0) {
            return "0";
        }
        bool isNegative = num < 0;
        num = abs(num);
        while (num > 0) {
            int rem = num % 7;
            s = char(rem + '0') + s;
            num /= 7;
        }
        if (isNegative) {
            s = "-" + s;
        }
        return s;
    }

int main() {
    int num;
    num = -100;

    string result = convertToBase7(num);
    cout << "The base 7 representation of " << num << " is: " << result << endl;

    return 0;
}