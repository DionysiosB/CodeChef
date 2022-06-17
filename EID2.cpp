#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    const int N = 3;
    long t; scanf("%ld", &t);
    while(t--){
        std::vector<std::pair<long, long> > v(N);
        for(long p = 0; p < N; p++){scanf("%ld", &v[p].first);}
        for(long p = 0; p < N; p++){scanf("%ld", &v[p].second);}
        sort(v.rbegin(), v.rend());

        bool fair(true);
        for(long p = 1; p < N; p++){
            if(v[p - 1].first > v[p].first && v[p - 1].second <= v[p].second){fair = false;}
            if(v[p - 1].first == v[p].first && v[p - 1].second != v[p].second){fair = false;}
        }

        puts(fair ? "FAIR" : "NOT FAIR");
    }

}
