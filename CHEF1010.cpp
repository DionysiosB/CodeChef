#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long a(0), z(0);
        for(long p = 0; p < s.size(); p++){
            a += (s[p] == '1');
            z += (s[p] == '0');
        }

        long res = (a < z ? a : z) - 1; res = (res > 0) ? res : 0;
        std::cout << res << std::endl;

    }

}
