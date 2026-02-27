#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool v[26] = {0}; bool possible(false);
        for(long p = 0; !possible && p < s.size(); p++){
            int cur = s[p] - 'a';
            if(v[cur]){possible = true;}
            v[cur] = 1;
        }

        std::cout << (possible ? (n - 2) : -1) << std::endl;

    }

}
