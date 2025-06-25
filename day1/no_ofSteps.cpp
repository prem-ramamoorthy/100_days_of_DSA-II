#include<bits/stdc++.h>
using namespace std;

int numberOfSteps(int num) {
        int result = 0 ;
        while(num > 0){
            if(num % 2 == 0){
                num /= 2 ;
            }
            else{
                num -= 1 ;

            }
            result++;
        }
        return result ;
    }

int main(){
    int num = 14;
    int steps = numberOfSteps(num);
    cout << "Number of steps to reduce " << num << " to zero is: " << steps << endl;
    return 0;
}