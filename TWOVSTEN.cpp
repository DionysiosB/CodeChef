#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        if(x % 10 == 0){puts("0");}
        else if(x % 5 == 0){puts("1");}
        else{puts("-1");}
    }

    return 0;
}
