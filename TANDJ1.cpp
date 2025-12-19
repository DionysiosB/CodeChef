#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d, k; scanf("%ld %ld %ld %ld %ld", &a, &b, &c, &d, &k);
        long dist = (a < c ? (c - a) : (a - c)) + (b < d ? (d - b) : (b - d));
        puts( (k < dist) || ((k - dist) % 2) ? "NO" : "YES");
    }

}
