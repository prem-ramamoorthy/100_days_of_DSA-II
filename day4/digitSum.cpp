int addDigits(int num) {
        int n = num ;
        while(true){
            int digisum = 0 ;
            if(n == 0 ){
                return 0 ;
            }
            int ndigits = 0 ;
            while(n > 0){
                digisum += n %10 ;
                ndigits++;
                n = n / 10 ;
            }
            if(ndigits > 1){
                n=digisum;
            }
            else{
                return digisum ;
            }
        }
    }

int main() {
    int num;
    num = 38;

    int result = addDigits(num);
    cout << "The result of adding digits until a single digit is obtained: " << result << endl;

    return 0;
}