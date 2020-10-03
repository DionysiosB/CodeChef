#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long prev(0), longest(0);
    for(long p = 1; p <= n; p++){
        long x; scanf("%ld", &x);
        if(x == 0){
            longest = (longest > (p - prev - 1)) ? longest : (p - prev - 1);
            prev = p;
        }
    }

    longest = (longest > (n - prev)) ? longest : (n - prev);
    printf("%ld\n", longest);

    return 0;
}
