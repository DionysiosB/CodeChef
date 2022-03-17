#include <iostream>


bool isVowel(char c){return c == 'a' || c == 'e' || c == 'i' ||  c == 'o' || c == 'u';}

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 1; p < s.size(); p++){cnt += (!isVowel(s[p - 1])) && isVowel(s[p]);}
        std::cout << cnt << std::endl;
    }

}
