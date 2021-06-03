#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long cur(0), cnt(0);
        while(n--){
            long h; scanf("%ld", &h);
            cnt += (h - cur - 1) / k;
            cur = h;
        }

        printf("%ld\n", cnt);
    }

    return 0;
}
