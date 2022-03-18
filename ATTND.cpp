#include <iostream>
#include <vector>
#include <map>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::map<std::string, long> cnt;
        std::vector<std::string> first(n), last(n);
        for(long p = 0; p < n; p++){
            std::cin >> first[p] >> last[p];
            ++cnt[first[p]];
        }

        for(long p = 0; p < n; p++){std::cout << first[p] << " " << (cnt[first[p]] > 1 ? last[p] : "") << std::endl;}
    }

}
