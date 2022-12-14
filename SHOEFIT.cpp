#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        int a, b, c; scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", 1 - (a == b && b == c));
    }

}
