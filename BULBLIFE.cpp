#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        long s(0);
        for(long p = 1; p < n; p++){long a; scanf("%ld", &a); s += a;}
        long diff = n * x - s;
        printf("%ld\n", diff > 0 ? diff : 0);
    }   

}
