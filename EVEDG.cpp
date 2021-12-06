#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> d(n + 1, 0);
        for(long p = 0; p < m; p++){long x, y; scanf("%ld %ld", &x, &y); ++d[x]; ++d[y];}
        bool rem(m % 2);
        puts(rem ? "2" : "1");
        for(long p = 1; p <= n; p++){
            if(rem && (d[p] % 2)){printf("2 "); rem = 0;}
            else{printf("1 ");}
        }
        puts("");
    }

    return 0;
}
