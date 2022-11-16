#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long sa, sb; std::cin >> sa >> sb;
        long move = sa + sb;
        long dist(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'A'){dist -= p;}
            else if(s[p] == 'B'){dist += p;}
        }

        std::cout << (dist % move ? "safe" : "unsafe") << std::endl;
    }

}
