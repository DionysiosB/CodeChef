#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cnt(0), cur(0), mx(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '#'){
                if(cur > mx){++cnt; mx = cur;}
                cur = 0;
            }
            else if(s[p] == '.'){++cur;}
        }

        if(cur > mx){++cnt;}

        printf("%ld\n", cnt);
    }

    return 0;
}
