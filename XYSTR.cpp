#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'x' && p > 0 && s[p - 1] == 'y'){s[p - 1] = 'z'; ++cnt;}
            else if(s[p] == 'x' && p + 1 < s.size() && s[p + 1] == 'y'){s[p + 1] = 'z'; ++cnt;}
        }

        std::cout << cnt << std::endl;
    }

}
