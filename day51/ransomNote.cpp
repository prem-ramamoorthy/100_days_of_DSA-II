#include<bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
        map<char, int> hash;

        for (char c : magazine) {
            hash[c]++;
        }
        for (char c : ransomNote) {
            if (hash[c] <= 0) {
                return false;
            }
            hash[c]--;
        }
        return true;
    }

int main() {
    string ransomNote = "a";
    string magazine = "b";
    cout << canConstruct(ransomNote, magazine) << endl;
    return 0;
}