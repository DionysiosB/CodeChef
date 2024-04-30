#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        long a(0), b(0);
        for(long p = 0; p < n; p++){
            std::string s; std::cin >> s;
            (s[0] == 'S') ? (++a) : (++b);
        }

        std::cout << a << " " << b << std::endl;
    }   

}
