#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        long x, y; std::cin >> x >> y;
        while(n--){
            std::string s; std::cin >> s;
            long v(0), m(0), u(0);
            for(long p = 0; p < s.size(); p++){
                v += (s[p] == 'F');
                m += (s[p] == 'P');
                u += (s[p] == 'U');
            }

            bool res = (v >= x) || (v == x - 1 && m >= y);
            std::cout << (res ? "1" : "0");
        }
        std::cout << std::endl;
    }

}
