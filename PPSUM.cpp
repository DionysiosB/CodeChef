#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long d, n; scanf("%ld %ld", &d, &n);
        long s(n);
        while(d--){s = s * (s + 1) / 2;}
        printf("%ld\n", s);
    }

    return 0;
}
