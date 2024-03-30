#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long res = 21 - a - b;
        printf("%ld\n", (1 <= res && res <= 10) ? res : -1);
    }   

}
