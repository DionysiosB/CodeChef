#include <iostream>
#include <string>

int main(){

    long t; std::cin >> t;
    std::string s; getline(std::cin, s);
    while(t--){
        getline(std::cin, s);
        bool fancy = (s.size() >= 4 && s.substr(0,4) == "not ") || (s.size() >= 4 && s.substr(s.size() - 5, 4) == " not") || (s.find(" not ") != std::string::npos) || (s == "not");
        std::cout << (fancy ? "Real Fancy" : "regularly fancy") << std::endl;
    }

    return 0;
}
