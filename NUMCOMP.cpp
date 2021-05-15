#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, n; scanf("%ld %ld %ld", &a, &b, &n);
        if((n == 0) || (a == b)){puts("0");}
        else if(n % 2 == 0){
            a = (a > 0) ? a : (-a);
            b = (b > 0) ? b : (-b);
            if(a == b){puts("0");}
            else{puts(a > b ? "1" : "2");}
        }
        else if(n % 2){puts(a > b ? "1" : "2");}
    }

    return 0;
}
