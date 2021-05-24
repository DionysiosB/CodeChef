#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long h, m; scanf("%ld %ld", &h, &m);
        long cnt(1);
        for(long p = 1; p <= 9; p++){
            long ch = (p < h) + (11 * p < h);
            long cm = (p < m) + (11 * p < m);
            cnt += ch * cm;
        }

        printf("%ld\n", cnt);
    }

    return 0;
}
