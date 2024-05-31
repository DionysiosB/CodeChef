#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool res(true);
        for(long p = 0; p < n / 2; p++){if(s[p] != s[n / 2 + p]){res = false; break;}}
        std::cout << (res ? "YES" : "NO") << std::endl;
    }   

}
