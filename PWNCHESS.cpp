#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long s; std::string >> s;
        long lw(-1), fb(s.size());
        for(long p = s.size() - 1; p >= 0; p--){if(s[p] == 'W'){lw = p; break;}}
        for(long p = 0; p < s.size(); p++){if(s[p] == 'B'){fb = p; break;}}
        long wm(0), bm(0);
        for(long p = 0; p <= lw; p++){if(s[p] == '.'


    }

    return 0;
}
