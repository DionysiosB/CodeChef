#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    const long N = 26;
    long t; std::cin >> t;
    while(t--){
        std::string a, b; std::cin >> a >> b;
        std::vector<bool> ltt(N, 0);
        bool possible(false);
        for(long p = 0; p < a.size(); p++){ltt[a[p] - 'a'] = 1;}
        for(long p = 0; p < b.size(); p++){if(ltt[b[p] - 'a']){possible = true; break;}}
        std::cout << (possible ? "Yes" : "No") << std::endl;
    }

    return 0;
}
