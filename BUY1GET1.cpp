#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    const int N = 256;
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<long> a(N); 
        for(long p = 0; p < s.size(); p++){++a[s[p]];}
        long total(0);
        for(long p = 0; p < N; p++){total += (1 + a[p]) / 2;}
        std::cout << total << std::endl;
    }

    return 0;
}
