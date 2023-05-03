#include <iostream>

int main(){

    long t; std::cin >> t; 
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0); bool res(false);
        for(long p = 0; p < s.size(); p++){
            cnt += (s[p] == '1');
            if(2 * cnt >= p + 1){res = true;}
        }

        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
