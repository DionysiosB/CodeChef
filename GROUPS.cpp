#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s; 
        char prev('0'); long cnt(0);
        for(long p = 0; p < s.size(); p++){cnt += (s[p] == '1' && prev == '0'); prev = s[p];}
        std::cout << cnt << std::endl;
    }

}
