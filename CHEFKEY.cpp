#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long n, m, c; scanf("%ld %ld %ld\n", &n, &m, &c);
        long count(0);
        for(long p = 1; p * p <= c; p++){
            if(c % p != 0){continue;}
            long q = c / p;
            if(p != q){
                if(p <= n && q <= m){++count;}
                if(q <= n && p <= m){++count;}
            }
            else if((p <= n && q <= m) || (q <= n && p <= m)){++count;}
        }

        printf("%ld\n", count);
    }

    return 0;
}
