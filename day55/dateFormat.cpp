#include<bits/stdc++.h>
using namespace std;

string reformatDate(string date) {
        unordered_map<string,string> month  = {{"Jan", "01"}, {"Feb", "02"}, {"Mar","03"}, {"Apr","04"}, {"May","05"},{ "Jun","06"}, {"Jul","07"}, {"Aug","08"}, {"Sep","09"}, {"Oct","10"}, {"Nov","11"}, {"Dec","12"}} ;
        int i = 0;
        while (isdigit(date[i])) i++;
        string dayNum = date.substr(0, i);
        stringstream ss;
        ss << setw(2) << setfill('0') << dayNum;
        dayNum = ss.str() ;
        int n = date.size() ;
        return date.substr(n-4)+"-"+month[date.substr(n - 8 , 3)]+"-"+dayNum ;
    }

int main() {
    string date = "20th Oct 2052";
    cout << reformatDate(date) << endl;
    return 0;
}