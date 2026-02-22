#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        if(s == "1" || s == "10"){std::cout << "NO" << std::endl; continue;}

        long a(0);
        for(long p = 0; p < s.size(); p++){a += (s[p] == '1');}
        std::cout << (a <= 3 ? "YES" : "NO") << std::endl;
    }

}
