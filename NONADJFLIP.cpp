#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool a(0), adj(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '1'){a = true;}
            if(p > 0 && s[p - 1] == '1' && s[p] == '1'){adj = true;}
        }

        std::cout << (a + adj) << std::endl;
    }

}
