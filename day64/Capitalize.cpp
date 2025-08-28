#include<bits/stdc++.h>
using namespace std;

string capitalizeTitle(string title) {
        string result = "";
        string word = "";
        for (int i = 0; i < title.size(); i++) {
            if (title[i] == ' ') {
                if (word.size() > 2) {
                    result += toupper(word[0]);
                    for (int j = 1; j < word.size(); j++) {
                        result += tolower(word[j]);
                    }
                } else {
                    for (int j = 0; j < word.size(); j++) {
                        result += tolower(word[j]);
                    }
                }
                result += ' ';
                word = "";
            } else {
                word += title[i];
            }
        }
        if (word.size() > 2) {
            result += toupper(word[0]);
            for (int j = 1; j < word.size(); j++) {
                result += tolower(word[j]);
            }
        } else {
            for (int j = 0; j < word.size(); j++) {
                result += tolower(word[j]);
            }
        }
        return result;
    }

int main () {
    string title = "hello world this is a test";
    string capitalized = capitalizeTitle(title);
    cout << capitalized << endl;
    return 0;
}