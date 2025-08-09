#include<bits/stdc++.h>
using namespace std ;

int appendCharacters(string s, string t) {
        int i = 0, j = 0;
        int n = s.size(), m = t.size();

        while (i < n && j < m) {
            if (s[i] == t[j]) {
                j++;
            }
            i++;
        }

        return m - j;
    }

int main() {
    string s, t;
    cin >> s >> t;
    cout << appendCharacters(s, t) << endl;
    return 0;
}