#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        long cnt(0); bool strong(false);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '*'){++cnt;}
            else{cnt = 0;}
            if(cnt >= k){strong = true;}
        }

        std::cout << (strong ? "YES" : "NO") << std::endl;
    }

}
