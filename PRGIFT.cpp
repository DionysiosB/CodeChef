#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long count(0); bool odd(0);
        while(n--){long a; scanf("%ld", &a); count += (a % 2 == 0); odd |= (a % 2);}
        puts((k == 0 && odd) || (k > 0 && count >= k) ? "YES" : "NO");
    }

    return 0;
}
