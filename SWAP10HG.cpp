#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s, t; std::cin >> s >> t;
        long cnt(0); bool res(true);
        for(long p = 0; p < n; p++){
            cnt += (s[p] == '1') - (t[p] == '1');
            if(cnt < 0){res = false; break;}
        }

        if(cnt){res = false;}
        std::cout << (res ? "Yes" : "No") << std::endl;
    }

}
