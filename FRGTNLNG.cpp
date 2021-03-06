#include <iostream>
#include <vector>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::vector<std::string> w(n); for(long p = 0; p < n; p++){std::cin >> w[p];}
        std::set<std::string> z;
        while(k--){
            long u; std::cin >> u;
            while(u--){std::string s; std::cin >> s; z.insert(s);}
        }

        for(long p = 0; p < n; p++){printf(z.count(w[p]) ? "YES " : "NO ");}
        puts("");
    }

    return 0;
}
