#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        bool res(false);
        while(n--){long a; scanf("%ld", &a); if(a >= x){res = true;}}
        puts(res ? "YES" : "NO");
    }

    return 0;
}
