#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        for(long p = 0; p < n; p++){
            std::string s; std::cin >> s;
            std::cout << (1 - (s[p] - '0'));
        }

        std::cout << std::endl;
    }

}
