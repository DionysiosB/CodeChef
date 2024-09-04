#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s, r; std::cin >> s >> r;
        long cnt(0);
        for(long p = 0; p < n; p++){cnt += (r[p] != s[p]);}
        std::cout << (1 - cnt % 2) << std::endl;
    }   

}
