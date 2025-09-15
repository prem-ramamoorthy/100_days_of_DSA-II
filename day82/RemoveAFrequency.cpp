#include<bits/stdc++.h>
using namespace std ;

bool equalFrequency(string word) {
        unordered_map<char, int> hash;
        for (char i : word)
            hash[i]++;
        map<int, int> hash2;
        for (auto i : hash) {
            hash2[i.second]++;
        }
        if (hash2.size() > 2) {
            return false;
        }
        if (hash2.size() == 2) {
            auto it = hash2.begin();
            int f1 = it->first, c1 = it->second;
            ++it;
            int f2 = it->first, c2 = it->second;
            if (f1 == 1 && c1 == 1)
                return true;
            if (f2 == f1 + 1 && c2 == 1)
                return true;
            return false;
        }
        if (hash2.size() == 1) {
            if(hash2.begin()->second == 1) return true ;
            if (hash.begin()->second > 1) {
                return false;
            } else {
                return true;
            }
        }
        return false;
    }


int main() {
    cout<<equalFrequency("aba") ;
    return 0 ;
}