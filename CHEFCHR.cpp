#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long c(0), h(0), e(0), f(0);
        for(long p = 0; p < 4; p++){
            c += (s[p] == 'c');
            h += (s[p] == 'h');
            e += (s[p] == 'e');
            f += (s[p] == 'f');
        }

        long cnt(c && h && e && f);
        for(long p = 4; p < s.size(); p++){
            c += (s[p] == 'c') - (s[p - 4] == 'c');
            h += (s[p] == 'h') - (s[p - 4] == 'h');
            e += (s[p] == 'e') - (s[p - 4] == 'e');
            f += (s[p] == 'f') - (s[p - 4] == 'f');
            cnt += (c && h && e && f);
        }

        if(!cnt){puts("normal");}
        else{printf("lovely %ld\n", cnt);}
    }

    return 0;
}
