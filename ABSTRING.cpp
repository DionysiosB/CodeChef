#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long v[26] = {0};
        for(long p = 0; p < n; p++){++v[s[p] - 'a'];}
        bool possible(true);
        for(long p = 0; possible && p < 26; p++){if(v[p] % 2){possible = false;}}
        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
