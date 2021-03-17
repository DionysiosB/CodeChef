#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 1; p < s.size(); p++){if(s[p - 1] != s[p]){++cnt;}}
        cnt = (cnt + 1) / 2;
        printf("%ld\n", cnt);
    }

    return 0;
}
