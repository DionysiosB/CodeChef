#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long x, y; std::cin >> x >> y;
        std::string s; std::cin >> s;
        long cnt(0), cur(0), mx(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '0'){cur = 0; continue;}
            ++cnt; ++cur; mx = (mx > cur) ? mx : cur;
        }

        long res = x * cnt + y * mx;
        std::cout << res << std::endl;
    }

}
