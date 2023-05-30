#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        int state(0); long cnt(0);
        for(long p = 0; p < s.size(); p++){
            long x = (s[p] - '0' + state) % 2;
            if(!x){state = 1 - state; ++cnt;}
        }

        std::cout << cnt << std::endl;
    }

}
