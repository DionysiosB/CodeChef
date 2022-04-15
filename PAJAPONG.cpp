#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, k; scanf("%ld %ld %ld", &x, &y, &k);
        long z = (x + y) % (2 * k);
        puts(z < k ? "Chef" : "Paja");
    }

}
