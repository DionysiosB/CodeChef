#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, x, y; std::cin >> n >> x >> y;
        std::string s; std::cin >> s;
        bool a(false), z(false);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '0'){z = true;}
            else if(s[p] == '1'){a = true;}
        }

        std::cout << ((z && a) ? (x < y ? x : y) : 0) << std::endl;

    }

}
