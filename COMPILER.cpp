#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cnt(0), cur(0);
        for(long p = 0; p < s.size(); p++){
            cur += (s[p] == '<') - (s[p] == '>');
            if(cur == 0){cnt = p + 1;}
            else if(cur < 0){break;}
        }

        std::cout << cnt << std::endl;

    }

}
