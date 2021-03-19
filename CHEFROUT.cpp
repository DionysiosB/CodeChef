#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long prev(0), cur(0);
        bool possible(true);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'C'){cur = 0;} 
            else if(s[p] == 'E'){cur = 1;} 
            else if(s[p] == 'S'){cur = 2;} 
            if(cur < prev){possible = false; break;}
            prev = cur;
        }

        std::cout << (possible ? "yes" : "no") << std::endl;
    }

    return 0;
}
