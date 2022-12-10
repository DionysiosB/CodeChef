#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, pos, x, y; scanf("%ld %ld %ld %ld", &n, &pos, &x, &y);
        long res(0);
        for(long p = 0; p < n; p++){
            int t; scanf("%d", &t);
            if(p >= pos){continue;}
            res += (1 - t) * x + t * y;
        }

        printf("%ld\n", res);
    }

}
