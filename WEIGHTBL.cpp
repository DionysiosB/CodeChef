#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long w1, w2, x1, x2, m; scanf("%ld %ld %ld %ld %ld", &w1, &w2, &x1, &x2, &m);
        printf("%d\n", (w1 + m * x1 <= w2) && (w2 <= w1 + m * x2));
    }

}
