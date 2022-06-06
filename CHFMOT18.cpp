#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long s, n; scanf("%ld %ld", &s, &n);
        long res = s / n; s %= n;
        if(s % 2){++res; --s;}
        res += (s > 0);
        printf("%ld\n", res);
    }

}
