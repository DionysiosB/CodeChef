#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        for(long p = 0; p < s.size(); p += 2){
            char cur;
            if(s[p] == '0' && s[p + 1]  == '0'){cur = 'A';}
            else if(s[p] == '0' && s[p + 1]  == '1'){cur = 'T';}
            else if(s[p] == '1' && s[p + 1]  == '0'){cur = 'C';}
            else if(s[p] == '1' && s[p + 1]  == '1'){cur = 'G';}
            std::cout  << cur;
        }

        std::cout << std::endl;
    }   

}
