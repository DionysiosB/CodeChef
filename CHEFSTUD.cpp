#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long count(0);
        for(long p = 1; p < s.size(); p++){count += (s[p - 1] == '<' && s[p] == '>');}
        std::cout << count << std::endl;
    }

    return 0;
}
