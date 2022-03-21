#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long x(0), y(0); bool vertical(false);
        for(long p = 0; p < s.size(); p++){
            if(     s[p] == 'R' && (p == 0 ||  vertical)){++x; vertical = false;}
            else if(s[p] == 'L' && (p == 0 ||  vertical)){--x; vertical = false;}
            else if(s[p] == 'U' && (p == 0 || !vertical)){++y; vertical = true;}
            else if(s[p] == 'D' && (p == 0 || !vertical)){--y; vertical = true;}
        }

        std::cout << x << " " << y << std::endl;
    }

}
