#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        long small(0), caps(0);
        for(long p = 0; p < s.size(); p++){
            if('a' <= s[p] && s[p] <= 'z'){++small;}
            if('A' <= s[p] && s[p] <= 'Z'){++caps;}
        }

        if(small <= k && caps <= k){puts("both");}
        else if(small > k && caps <= k){puts("chef");}
        else if(small <= k && caps > k){puts("brother");}
        else{puts("none");}
    }

    return 0;
}
