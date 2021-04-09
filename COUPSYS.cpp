#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long d[3] = {0};
        long c[3]; c[0] = c[1] = c[2] = 1;
        while(n--){
            long city, lvl, disc; scanf("%ld %ld %ld", &city, &lvl, &disc);
            --lvl;
            if(disc > d[lvl]){d[lvl] = disc; c[lvl] = city;}
            else if(disc == d[lvl]){c[lvl] = (c[lvl] < city) ? c[lvl] : city;}
        }

        for(long p = 0; p < 3; p++){printf("%ld %ld\n", d[p], c[p]);}
    }

    return 0;
}
