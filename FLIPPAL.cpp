#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long a(0), z(0);
        for(long p = 0; p < s.size(); p++){
            z += (s[p] == '0');
            a += (s[p] == '1');
        }

        bool res = ((a % 2) + (z % 2) <= 1);
        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
