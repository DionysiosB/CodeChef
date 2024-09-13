#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::vector<long> v(26, 0);
        for(long p = 0; p < s.size(); p++){
            int x = s[p] - 'a';
            v[x] = 1 - v[x];
        }

        bool res(true);
        for(long p = 0; res && p < v.size(); p++){if(v[p]){res = false;}};
        std::cout << (res ? "YES" : "NO") << std::endl;

    }

}
