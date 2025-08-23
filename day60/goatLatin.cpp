#include<bits/stdc++.h>
using namespace std ;

string toGoatLatin(string sentence) {
        vector<string> words;
        string word;
        for (char ch : sentence) {
            if (ch == ' ') {
                if (!word.empty())
                    words.push_back(word);
                word.clear();
            } else {
                word += ch;
            }
        }
        if (!word.empty())
            words.push_back(word);
        auto isVowel = [](char c) {
            c = tolower(static_cast<unsigned char>(c));
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        string result;
        for (int i = 0; i < (int)words.size(); i++) {
            string nw = words[i];
            if (isVowel(nw[0])) {
                nw += "ma";
            } else {
                char first = nw;
                nw = nw.substr(1) + first + string("ma");
            }
            nw += string(i + 1, 'a');
            if (!result.empty())
                result += ' ';
            result += nw;
        }
        return result;
    }

int main() {
    string sentence = "I speak Goat Latin";
    cout << toGoatLatin(sentence) << endl;
    return 0;
}