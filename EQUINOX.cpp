#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, a, b; std::cin >> n >> a >> b;
        long x(0);
        for(long p = 0; p < n; p++){
            std::string s; std::cin >> s;
            if(s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X'){x += a;}
            else{x -= b;}
        }

        if(x == 0){std::cout << "DRAW" << std::endl;}
        else{std::cout << (x > 0 ? "SARTHAK" : "ANURADHA") << std::endl;}
    }


}
