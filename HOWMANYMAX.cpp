#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt = (s[0] == '1') + (s[n - 2] == '0');
        for(long p = 1; p < s.size(); p++){cnt += ((s[p - 1] == '0') && (s[p] == '1'));}
        std::cout << cnt << std::endl;
    }

}
