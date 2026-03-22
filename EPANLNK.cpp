#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long res(0);
        for(long p = 0; p < s.size(); p++){
            res = (res * 10 + (s[p] - '0')) % 20;
        }

        std::cout << res << std::endl;
    }

}
