#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string a, b, c; std::cin >> a >> b >> c;
        std::string x, y; std::cin >> x >> y;
        std::cout << (x == a || y == a ? a : b) << std::endl;
    }

}
