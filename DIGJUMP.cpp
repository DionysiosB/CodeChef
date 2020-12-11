#include <iostream>
#include <vector>

int main(){

    const long N = 10;
    std::string s; std::cin >> s;

    std::vector<long> dist(s.size(), s.size() + 1);
    std::vector<long> digitDist(N, s.size() + 1);
    dist[0] = 0; digitDist[s[0] - '0'] = 1;

    int count(N);
    while(count--){
        for(long p = 1; p < s.size(); p++){
            long digit = s[p] - '0';
            dist[p] = (dist[p] < digitDist[digit]) ? dist[p] : digitDist[digit];
            if(dist[p] > dist[p - 1] + 1){dist[p] = dist[p - 1] + 1;}
            if((p < s.size() - 1) && dist[p] > dist[p + 1] + 1){dist[p] = dist[p + 1] + 1;}
            if(digitDist[digit] > dist[p] + 1){digitDist[digit] = dist[p] + 1;}
        }
    }

    std::cout << dist.back() << std::endl;

    return 0;
}
