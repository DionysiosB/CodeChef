#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        if(s[0] == '1'){s[0] = '0';}
        std::cout << "1" << s << std::endl;
    }

}
