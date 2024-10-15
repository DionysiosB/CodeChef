#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 0; 2 * p < n; p++){cnt += (s[p] != s[n - 1 - p]);}
        std::cout << ((cnt + 1) / 2) << std::endl;
    }

}
