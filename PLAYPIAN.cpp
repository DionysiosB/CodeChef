#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cnt(0); bool valid(true);
        for(long p = 0; p < s.size(); p++){
            cnt += (s[p] == 'A') - (s[p] == 'B');
            if(cnt < -1 || cnt > 1){valid = false; break;}
        }

        std::cout << (valid ? "yes" : "no") << std::endl;
    }

    return 0;
}
