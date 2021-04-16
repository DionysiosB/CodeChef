#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, s; scanf("%ld %ld %ld", &n, &k, &s);
        long rem(0), cnt(0);
        for(long p = 1; p <= s; p++){
            if(p % 7 != 0){rem += n; ++cnt;}
            rem -= k;
            if(rem < 0){cnt = -1; break;}
        }

        if(cnt > 0){cnt -= (rem / n);}
        printf("%ld\n", cnt);
    }

    return 0;
}
