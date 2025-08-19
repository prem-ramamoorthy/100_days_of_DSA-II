#include<bits/stdc++.h>
using namespace std ;

string largestGoodInteger(string num) {
        string best = "";
        for (int i = 0; i + 2 < (int)num.size(); ++i) {
            char a = num[i], b = num[i+1], c = num[i+2];
            if (a == b && b == c) {
                if (best.empty() || a > best[0]) {
                    best = string(3, a);
                }
            }
        }
        return best;
    }

int main() {
    string num = "6777133339";
    string result = largestGoodInteger(num);
    cout << "Largest good integer: " << result << endl;
    return 0; 
}