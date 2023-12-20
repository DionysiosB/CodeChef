#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'A'){std::cout << 'T';}
            else if(s[p] == 'T'){std::cout << 'A';}
            else if(s[p] == 'C'){std::cout << 'G';}
            else if(s[p] == 'G'){std::cout << 'C';}
        }
        std::cout << std::endl;
    }   

}
