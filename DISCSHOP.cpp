#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long rem(s.size() - 1);
        for(long p = 0; p + 1 < s.size(); p++){if(s[p] > s[p + 1]){rem = p; break;}}

        long res(0);
        for(long p = 0; p < s.size(); p++){
            if(p == rem){continue;}
            res = 10 * res + (s[p] - '0');
        }
        std::cout << res << std::endl;
    }

}
