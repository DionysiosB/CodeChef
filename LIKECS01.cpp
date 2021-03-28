#include <iostream>
#include <vector>

int main(){

    const int N = 26;
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<bool> v(N, 0);
        bool res(false);
        for(long p = 0; p < s.size(); p++){
            if(v[s[p] - 'a']){res = true; break;}
            v[s[p] - 'a'] = true;
        }

        std::cout << (res ? "yes" : "no") << std::endl;
    }

    return 0;
}
