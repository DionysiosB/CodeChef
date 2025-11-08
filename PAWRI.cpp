#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        for(long p = 4; p < s.size(); p++){
            if(s[p - 4] == 'p' && s[p - 3] == 'a' && s[p - 2] == 'r' && s[p - 1] == 't' && s[p] == 'y'){
                s[p - 2] = 'w'; s[p - 1] = 'r'; s[p] = 'i';
            }
        }

        std::cout << s << std::endl;
    }

}
