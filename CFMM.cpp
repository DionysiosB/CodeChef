#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        long c(0), d(0), e(0), f(0), h(0), o(0);
        while(n--){
            std::string s; std::cin >> s;
            for(long p = 0; p < s.size(); p++){
                if(s[p] == 'c'){++c;}
                if(s[p] == 'd'){++d;}
                if(s[p] == 'e'){++e;}
                if(s[p] == 'f'){++f;}
                if(s[p] == 'h'){++h;}
                if(s[p] == 'o'){++o;}
            }
        }

        c /= 2; e /= 2;
        long mn(1e9);
        mn = (mn < c) ? mn : c; mn = (mn < d) ? mn : d; mn = (mn < e) ? mn : e;
        mn = (mn < f) ? mn : f; mn = (mn < h) ? mn : h; mn = (mn < o) ? mn : o;
        std::cout << mn << std::endl;
    }

}
