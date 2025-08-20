#include <bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber) {
    string res;
    while (columnNumber > 0) {
        columnNumber--; 
        int r = columnNumber % 26;
        res.push_back(char('A' + r));
        columnNumber /= 26;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> tests = {1, 26, 27, 28, 52, 701, 702, 703};
    for (int n : tests) {
        cout << n << " -> " << convertToTitle(n) << '\n';
    }
    return 0;
}
