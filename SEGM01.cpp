#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long left(0), right(s.size() - 1);
        while(left < s.size() && s[left] == '0' ){++left;}
        while(right >= 0 && s[right] == '0'){--right;}
        std::string ans(left <= right ? "YES" : "NO");
        for(long p = left; p <= right; p++){if(s[p] != '1'){ans = "NO";}}
        std::cout << ans << std::endl;
    }

    return 0;
}
