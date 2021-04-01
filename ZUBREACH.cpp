#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    for(long cs = 1; cs <= t; cs++){
        long m, n; std::cin >> m >> n;
        long rx, ry; std::cin >> rx >> ry;
        long ss; std::cin >> ss;
        std::string s; std::cin >> s;
        long x(0), y(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'U'){++y;}
            else if(s[p] == 'D'){--y;}
            else if(s[p] == 'R'){++x;}
            else if(s[p] == 'L'){--x;}
        }

        printf("Case %ld: ", cs);
        if(x == rx && y == ry){puts("REACHED");}
        else if(x < 0 || x > m || y < 0 || y > n){puts("DANGER");}
        else{puts("SOMEWHERE");}
    }

    return 0;
}
