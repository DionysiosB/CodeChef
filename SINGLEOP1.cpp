#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long res(s.size());
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '0'){res = p; break;}
        }

        std::cout << res << std::endl;
    }

}
