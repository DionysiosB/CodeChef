#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        puts( (a != b) && ((c == d) ||  (a - b) % (c - d)) ? "NO" : "YES");
    }

}
