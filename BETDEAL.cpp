#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long u(100 - a), v(200 - 2 * b);
        if(u == v){puts("BOTH");}
        else{puts(u < v ? "FIRST" : "SECOND");}
    }

}
