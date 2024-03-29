#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long p, q; scanf("%ld %ld", &p, &q);
        puts( ( (p + q) % 4 < 2) ? "Alice" : "Bob");
    }   

}
