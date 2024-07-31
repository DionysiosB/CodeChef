#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long x; std::cin >> x;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 0; p < s.size(); p++){cnt += 2 * (s[p] == 'C') + (s[p] == 'D');}
        if(cnt > s.size()){printf("%ld\n", 60 * x);}
        else if(cnt == s.size()){printf("%ld\n", 55 * x);}
        else{printf("%ld\n", 40 * x);}

    }   

}
