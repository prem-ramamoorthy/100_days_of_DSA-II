#include<bits/stdc++.h>
using namespace std;

int getLucky(string s, int k) {
        string s1;
        for (char i : s) {
            s1 += to_string(i -'a' + 1);
        }
        for (int i = 1; i <= k; i++) {
            int sum = 0 ;
            for(char j : s1){
                sum += (j - '0' ) ;
            }
            s1 = to_string(sum);
        }
        return stoi(s1) ;
    }

int main() {
    string s = "leetcode";
    int k = 2;
    int result = getLucky(s, k);
    cout << "The lucky number is: " << result << endl; // Output: 6
    return 0;
}