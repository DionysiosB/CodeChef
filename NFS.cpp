#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long u, v, a, s; scanf("%ld %ld %ld %ld", &u, &v, &a, &s);
        puts( (2 * a * s >= u * u - v * v) ? "Yes" : "No");
    }

}
