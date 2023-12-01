#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        a = (a > b ? a : b); a = (a > c ? a : c); a = (a > d ? a : d);
        printf("%ld\n", a);
    }   

}
