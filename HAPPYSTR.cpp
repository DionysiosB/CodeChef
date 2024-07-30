#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        bool happy(false);
        for(long p = 2; p < s.size(); p++){
            if(
                    (s[p - 2] == 'a' || s[p - 2] == 'e' || s[p - 2] == 'i' || s[p - 2] == 'o' || s[p - 2] == 'u') &&
                    (s[p - 1] == 'a' || s[p - 1] == 'e' || s[p - 1] == 'i' || s[p - 1] == 'o' || s[p - 1] == 'u') && 
                    (s[p] == 'a' || s[p] == 'e' || s[p] == 'i' || s[p] == 'o' || s[p] == 'u')
              ){happy = true;}
        }

        std::cout << (happy ? "Happy" : "Sad") << std::endl;

    }   

}
