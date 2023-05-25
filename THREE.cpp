#include <iostream>

int main(){

    const int N = 26;
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long v[N] = {0};
        for(long p = 0; p < s.size(); p++){++v[s[p] - 'a'];}
        long pairs(0), singles(0);
        for(long p = 0; p < N; p++){pairs += v[p] / 2; singles += v[p] % 2;}
        long res = (pairs < singles) ? pairs : singles;
        pairs -= res; singles -= res;
        res += 2 * pairs / 3;
        std::cout << res << std::endl;
    }

}
