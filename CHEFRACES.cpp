#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, a, b; scanf("%ld %ld %ld %ld", &x, &y, &a, &b);
        printf("%d\n", (x != a && x != b) + (y != a && y != b));
    }   

}
