#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s, t; std::cin >> s >> t;
        long a(0), b(0), c(0);
        for(long p = 0; p < 3; p++){
            if(s[p] == 'b' && t[p] == 'o'){++c;}
            else if(s[p] == 'o' && t[p] == 'b'){++c;}
            else if(s[p] == 'b' || t[p] == 'b'){++a;}
            else if(s[p] == 'o' || t[p] == 'o'){++b;}
        }

        if(a < 2 && a + c >= 2){c -= (2 - a); a = 2;}
        if(b < 1 && b + c >= 1){c--; b = 1;}
        std::cout << ((a == 2 && b == 1) ? "yes" : "no") << std::endl;
    }

    return 0;
}
