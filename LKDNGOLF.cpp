#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, k; scanf("%ld %ld %ld", &n, &x, &k);
        puts( (x % k == 0) || ((n + 1 - x) % k == 0)  ? "YES" : "NO");
    }

}
