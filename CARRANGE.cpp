#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long s, m, v; scanf("%ld %ld %ld", &s, &m, &v);
        printf("%ld\n", v * (m - s + 1));
    }

}
