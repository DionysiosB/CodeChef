#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long z(0), e(0);
        for(long p = 0; p < s.size(); p++){if(s[p] == '0'){++z;} else{++e;}}
        puts((z == 1 || e == 1) ? "Yes" : "No");
    }

    return 0;
}
