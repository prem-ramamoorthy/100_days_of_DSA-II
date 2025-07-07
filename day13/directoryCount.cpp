#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<string>& logs) {
        int count = 0; 
        for(string i : logs){
            if (i == "../" ){
                if(count > 0){
                    count--;
                }
            }
            else if (i == "./"){
                continue ;
            }
            else{
                count++;
            }
        }
        return count ;
    }

int main(){
    vector<string> logs = {"d1/","d2/","../","d21/","./"};
    int result = minOperations(logs);
    cout << "Minimum operations required: " << result << endl;
    return 0;
}
