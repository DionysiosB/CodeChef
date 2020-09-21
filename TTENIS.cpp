#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long w(0), l(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '1'){++w;}
            else if(s[p] == '0'){++l;}
            if(w >= 11 && l <= 9){puts("WIN"); break;}
            if(l >= 11 && w <= 9){puts("LOSE"); break;}
            if(w > 11 && w - l >= 2){puts("WIN"); break;}
            if(l > 11 && l - w >= 2){puts("LOSE"); break;}
        }
    }

    return 0;
}
