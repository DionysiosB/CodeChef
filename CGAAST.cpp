#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    const int N = 26;

    long t; std::cin >> t;
    while(t--){
        std::vector<long> a(N, 0);
        std::string s; 
        std::cin >> s; for(long p = 0; p < s.size(); p++){++a[s[p] - 'a'];}
        std::cin >> s; for(long p = 0; p < s.size(); p++){--a[s[p] - 'a'];}
        bool same(true);
        for(long p = 0; p < N; p++){if(a[p] != 0){same = false; break;}}
        std::cout << (same ? "Arjun" : "Amit") << std::endl;
    }

    return 0;
}
