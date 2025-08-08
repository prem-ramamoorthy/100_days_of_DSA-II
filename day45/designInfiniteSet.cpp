#include <bits/stdc++.h>
using namespace std;

class SmallestInfiniteSet {
    set<int> addedBack;
    int curr;
public:
    SmallestInfiniteSet() {
        curr = 1;
    }
    
    int popSmallest() {
        if (!addedBack.empty()) {
            int res = *addedBack.begin();
            addedBack.erase(addedBack.begin());
            return res;
        }
        return curr++;
    }
    
    void addBack(int num) {
        if (num < curr && addedBack.count(num) == 0) {
            addedBack.insert(num);
        }
    }
};

int main() {
    SmallestInfiniteSet* obj = new SmallestInfiniteSet();
    cout << obj->popSmallest() << endl; 
    obj->addBack(2);
    cout << obj->popSmallest() << endl; 
    cout << obj->popSmallest() << endl;
    obj->addBack(1);
    cout << obj->popSmallest() << endl; 
    delete obj;
    return 0;
}