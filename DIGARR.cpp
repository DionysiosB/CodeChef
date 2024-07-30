#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        bool res(false);
        long d; std::cin >> d;
        std::string s; std::cin >> s;
        for(long p = 0; p < d; p++){
            if(s[p] == '0' || s[p] == '5'){res = true; break;}
        }

        std::cout << (res ? "Yes" : "No") << std::endl;

    }   

}
