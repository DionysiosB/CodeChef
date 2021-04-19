#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long a(0), b(0), state(0), lastA(0), lastB(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'A'){if(state == 1){a += (p - lastA);} else{++a;}; state = 1; lastA = p;}
            if(s[p] == 'B'){if(state == 2){b += (p - lastB);} else{++b;}; state = 2; lastB = p;}
        }

        printf("%ld %ld\n", a, b);
    }

    return 0;
}
