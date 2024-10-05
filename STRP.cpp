#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0); bool prev(false);
        for(long p = 0; p < s.size(); p++){
            if(p == 0 || (s[p - 1] != s[p]) || prev){prev = false; ++cnt;}
            else if(s[p - 1] == s[p] && (!prev)){prev = true;}
        }

        printf("%ld\n", cnt);
    }

}
