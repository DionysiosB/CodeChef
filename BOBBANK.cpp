#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long w, x, y, z; scanf(" %ld %ld %ld %ld", &w, &x, &y, &z);
        printf("%ld\n", w + (x - y) * z);
    }   

}
