#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, r; std::cin >> n >> r;
        std::string s; std::cin >> s;
        long mn(0), mx(0), pos(0);
        for(long p = 0; p < n; p++){
            if(s[p] == 'L'){--pos;}
            else if(s[p] == 'R'){++pos;}
            mn = (mn < pos) ? mn : pos;
            mx = (mx > pos) ? mx : pos;
        }

        printf("%ld\n", (mx - mn + 1));
    }

    return 0;
}
