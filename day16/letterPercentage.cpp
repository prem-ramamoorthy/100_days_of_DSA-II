int percentageLetter(string s, char letter) {
        int count = 0 ;
        int total = s.size() ;
        for(int i = 0 ; i < total ; i++){
            if(s[i] == letter){
                count++;
            }
        }
        int result = static_cast<int>((static_cast<double>(count) / total) * 100) ;
        return result ;
    }

int main(){
    string s = "foobar";
    char letter = 'o' ;
    cout<<percentageLetter(s,letter) ;
    return 0;
}