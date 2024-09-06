#include <iostream>

bool isConsonant(char x){
    return (x != 'a') && (x != 'e') && (x != 'i') && (x != 'o') && (x != 'u');
}

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool easy(true);
        for(long p = 3; p < s.size(); p++){
            if(isConsonant(s[p - 3]) && isConsonant(s[p - 2]) && isConsonant(s[p - 1]) && isConsonant(s[p])) {easy = false; break;}
        }

        std::cout << (easy ? "YES" : "NO") << std::endl;
    }   

}
