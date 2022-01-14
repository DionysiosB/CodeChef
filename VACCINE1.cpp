#include <cstdio>

int main(){

    long d1, v1, d2, v2, target; scanf("%ld %ld %ld %ld %ld", &d1, &v1, &d2, &v2, &target);

    long sum(0), res(1);
    for(long p = 1; p <= 10000; p++){
        if(p >= d1){sum += v1;}
        if(p >= d2){sum += v2;}
        if(sum >= target){res = p; break;}
    }

    printf("%ld\n", res);
}
