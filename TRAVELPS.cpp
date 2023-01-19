#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, a, b; std::cin >> n >> a >> b;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 0; p < s.size(); p++){cnt += a * (s[p] == '0') + b * (s[p] == '1');}
        std::cout << cnt << std::endl;
    }

}
