#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, x; scanf("%ld %ld %ld", &a, &b, &x);
        puts( ((b - a) % (2 * x) == 0) ? "YES" : "NO");
    }

}
