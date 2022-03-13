#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long score[12] = {0};
        while(n--){
            long w, x; scanf("%ld %ld", &w, &x);
            score[w] = (score[w] > x) ? score[w] : x;
        }

        long sum(0); for(long p = 1; p <= 8; p++){sum += score[p];}
        printf("%ld\n", sum);
    }

}
