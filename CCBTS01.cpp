#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        bool ans = (s[0] != s[1]) && (s[0] != s[2]) && (s[1] != s[2]);
        std::cout << (ans ? "YES" : "NO") << std::endl;
    }

}
