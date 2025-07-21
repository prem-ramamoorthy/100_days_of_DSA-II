#include<bits/stdc++.h>
using namespace std;

int numberOfBeams(vector<string>& bank) {
        int result = 0 ;
        int previousLasers = 0 ;
        for(string i : bank){
            int currentLasers = count(i.begin() , i.end() , '1') ;
            if(previousLasers > 0){
                result += previousLasers * currentLasers ;
            }
            if(currentLasers > 0){
                previousLasers = currentLasers ;
            }
        }
        return result ;
    }

int main() {
    vector<string> bank = {"011001", "000000", "010100", "001000"};
    cout << numberOfBeams(bank) << endl;
    return 0 ;
}