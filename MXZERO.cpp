#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long ones(0), m(n);
        while(m--){int u; scanf("%d", &u); ones += (u == 1);}
        printf("%ld\n", (ones % 2) ? ones : (n - ones));
    }

    return 0;
}
