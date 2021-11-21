#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, b; scanf("%ld %ld", &n, &b);
        long best(-1);
        while(n--){
            long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
            if(z > b){continue;}
            best = (best > x * y) ? best : (x * y);
        }
        if(best > 0){printf("%ld\n", best);}
        else{puts("no tablet");}
    }

    return 0;
}
