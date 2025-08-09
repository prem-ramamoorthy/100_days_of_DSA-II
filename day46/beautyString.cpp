#include <bits/stdc++.h>
using namespace std;

int beautySum(string s) {
    int n = s.size();
        int result = 0;
        for(int i = 0; i < n; i++) {
            vector<int> freq(26,0) ;
            for(int j = i ; j < n ; j++){
                freq[s[j]-'a']++;
                int mini = INT_MAX ;
                int maxi = INT_MIN ;
                for(int k = 0 ; k < 26 ; k++){
                    if(freq[k]){
                        mini = min(freq[k] , mini) ;
                        maxi = max(freq[k] , maxi) ;
                    }
                }
                result += maxi - mini ;
            }
        }
        return result;
    }

int main() {
    string s;
    cin >> s;
    cout << beautySum(s) << endl;
    return 0;
}