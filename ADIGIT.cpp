#include <iostream>
#include <vector>
#include <cmath>

int iabs(int x){return ((x > 0) ? x : (-x));}

int main(){

    std::ios_base::sync_with_stdio(false);
    const int D = 10;

    long n, m; std::cin >> n >> m;
    std::string s; std::cin >> s;

    std::vector<long> count(D, 0);
    std::vector<long> v(s.size(), 0);

    for(long p = 0; p < s.size(); p++){
        int digit = s[p] - '0';
        ++count[digit];
        for(long d = 0; d < D; d++){v[p] += count[d] * iabs(digit - d);}
    }

    while(m--){long x; std::cin >> x; std::cout << v[x - 1] << std::endl;}

    return 0;
}
