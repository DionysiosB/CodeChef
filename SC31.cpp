#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<bool> w(10, 0);
        for(long p = 0; p < n; p++){
            std::string s; std::cin >> s;
            for(long q = 0; q < 10; q++){w[q] = w[q] ^ (s[q] - '0');}
        }

        long cnt(0); for(long p = 0; p < 10; p++){cnt += w[p];}
        std::cout << cnt << std::endl;
    }

}
