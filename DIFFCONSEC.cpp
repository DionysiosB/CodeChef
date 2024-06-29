#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 1; p < s.size(); p++){cnt += (s[p - 1] == s[p]);}
        std::cout << cnt << std::endl;
    }   

}
