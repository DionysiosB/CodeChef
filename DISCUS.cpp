#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        a = (a > b) ? a : b; a = (a > c) ? a : c;
        printf("%ld\n", a);
    }   

}
