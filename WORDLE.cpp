#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string a, b; std::cin >> a >> b;
        for(long p = 0; p < a.size(); p++){std::cout << (a[p] == b[p] ? "G" : "B");}
        std::cout << std::endl;
    }   

}
