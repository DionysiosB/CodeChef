#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long count(0), longest(0), zeros(0);
        for(long p = 0; p < 2 * n; p++){
            if(p < n && s[p] == '0'){++zeros;}
            if(p >= n && s[p % n] == 1){break;}

            if(s[p % n] == '0'){++count; longest = (longest > count) ? longest : count;}
            else{count = 0;}
        }

        std::cout << (zeros - longest) << std::endl;
    }

    return 0;
}
