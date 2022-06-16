#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, k, n; scanf("%ld %ld %ld %ld", &x, &y, &k, &n);
        puts( (x - y) % (2 * k) ? "No" : "Yes");
    }

}
