#include <iostream>

int main(){
    
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        long cnt(0), res(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '1'){res += (cnt / k); cnt = 0;}
            else if(s[p] == '0'){++cnt;}
        }

        res += (cnt / k);
        std::cout << res << std::endl;
    }

}
