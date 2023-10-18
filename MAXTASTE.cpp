#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        printf("%ld\n", (a > b ? a : b) + (c > d ? c : d));
    }   

}
