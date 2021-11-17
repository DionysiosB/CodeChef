#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long cnt(0); while(n--){long a; scanf("%ld", &a); cnt += (a % m == 0);}
        long long total = (1 << cnt) - 1;
        printf("%lld\n", total);
    }

    return 0;
}
