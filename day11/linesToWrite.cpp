#include<bits/stdc++.h>
using namespace std;

vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> result(2,0) ;
        int n = s.size() ;
        int l = 1 ;
        int w = 0 ;
        for(int i = 0 ; i < n ; i++){
            int width = widths[s[i] - 'a'] ;
            if((w+width) > 100){
                w = width ;
                l++ ;
            }
            else{
                w += width ;
            }
        }
        result[0] = l ;
        result[1] = w ;
        return result; 
    }

int main() {
    string s = "abcdefghijklmnopqrstuvwxyz";
    vector<int> widths = {4, 10, 10, 10, 10, 10, 10, 10, 10, 10, 
                          10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
                          10, 10, 10, 10, 10, 10};
    vector<int> result = numberOfLines(widths, s);
    cout << result[0] << endl;
    cout << result[1] << endl;
    return 0;
}