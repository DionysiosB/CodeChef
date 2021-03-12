#include <cstdio>
#include <vector>

int main(){

    const long N = 10000;
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<bool> a(N, 1);
        std::vector<long> s;
        for(long p = 1; p < N; p++){
            if(!a[p]){continue;}
            for(long u = 0; u < s.size(); u++){a[s[u] + p] = 0;}
            s.push_back(p);
            if(s.size() >= n){break;}
        }

        for(long p = 0; p < s.size(); p++){printf("%ld ", s[p]);}
        puts("");
    }

    return 0;
}
