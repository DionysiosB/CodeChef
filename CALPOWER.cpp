#include <iostream>
#include <algorithm>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        sort(s.begin(), s.end());
        long res(0);
        for(long p = 0; p < s.size(); p++){res += (p + 1) * (s[p] - 'a' + 1);}
        std::cout << res << std::endl;
    }

}
