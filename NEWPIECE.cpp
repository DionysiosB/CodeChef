#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, p, q; scanf("%ld %ld %ld %ld", &a, &b, &p, &q);
        if(a == p && b == q){puts("0");}
        else if(((a + b) % 2) != ((p + q) % 2)){puts("1");}
        else{puts("2");}
    }

}
