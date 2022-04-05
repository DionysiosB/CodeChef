#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        while(n--){long x; scanf("%ld", &x); printf("%d", (x % k == 0));} 
        puts("");
    }

}
