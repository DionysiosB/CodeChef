#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::string s; std::cin >> n >> s;
        for(long p = 0; p + 1 < s.size(); p += 2){char x = s[p]; s[p] = s[p + 1]; s[p + 1] = x;}
        for(long p = 0; p < s.size(); p++){s[p] = 'a' + 'z' - s[p];}
        std::cout << s << std::endl;
    }

    return 0;
}

