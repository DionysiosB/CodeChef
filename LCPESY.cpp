#include <iostream>
#include <vector>

int main(){

    const int N = 256;
    int t; std::cin >> t;
    while(t--){
        std::vector<long> la(N, 0), lb(N, 0);
        std::string sa, sb; std::cin >> sa >> sb;
        for(long p = 0; p < sa.size(); p++){++la[sa[p]];}
        for(long p = 0; p < sb.size(); p++){++lb[sb[p]];}
        long count(0);
        for(long p = 0; p < N; p++){count += (la[p] < lb[p]) ? la[p] : lb[p];}
        std::cout << count << std::endl;
    }

    return 0;
}
