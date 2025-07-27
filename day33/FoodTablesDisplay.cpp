#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>>result ;
        set<string> foods;
        map<int,map<string,int>> hash ;
        for(auto i : orders){
            int tno = stoi(i[1]) ;
            hash[tno][i[2]]++; 
            foods.insert(i[2]) ;
        }
        vector<string>res1(foods.begin() , foods.end() ) ;
        res1.insert(res1.begin() ,"Table") ;
        result.push_back(res1) ;
        for(auto i : hash){
            vector<string>res ;
            auto j = i.second ;
            res.push_back(to_string(i.first)) ;
            for(auto k : foods){
                res.push_back(to_string(j[k])) ;
            }
            result.push_back(res) ;
        }
        return result ;
    }

int main() {
    vector<vector<string>> orders = {
        {"David", "3", "Ceviche"},
        {"Corina", "3", "Fried Chicken"},
        {"David", "3", "Fried Chicken"},
        {"Carla", "2", "Water"},
        {"Carla", "5", "Ceviche"},
        {"Rous", "3", "Ceviche"}
    };
    vector<vector<string>> result = displayTable(orders);
    for (const auto& row : result) {
        for (const auto& cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
    return 0;
}