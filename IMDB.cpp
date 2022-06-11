#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        long res(0);
        while(n--){
            long s, r; scanf("%ld %ld", &s, &r);
            if(s > x){continue;}
            res = (res > r) ? res : r;
        }

        printf("%ld\n", res);
    }

}
