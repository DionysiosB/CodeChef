#include <cstdio>
#include <vector>

int main(){

    const long N = 100;
    long t; scanf("%ld", &t);
    while(t--){
        long M, x, y; scanf("%ld %ld %ld", &M, &x, &y);
        std::vector<bool> safe(N + 1, 1);
        while(M--){
            long pos; scanf("%ld", &pos);
            long left = pos - x * y;
            long right = pos + x * y;
            for(long p = pos; p >= 1 && p >= pos - x * y; p--){safe[p] = 0;}
            for(long p = pos; p <= N && p <= pos + x * y; p++){safe[p] = 0;}
        }

        long cnt(0);
        for(long p = 1; p <= N; p++){cnt += safe[p];}
        printf("%ld\n", cnt);
    }

    return 0;
}
