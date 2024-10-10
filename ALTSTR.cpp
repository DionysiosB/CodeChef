#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long z(0), a(0);
        for(long p = 0; p < n; p++){
            z += (s[p] == '0');
            a += (s[p] == '1');
        }

        long mn = (a < z) ? a : z;
        long mx = (a > z) ? a : z;

        std::cout << (2 * mn + (mn < mx)) << std::endl;
    }

}
