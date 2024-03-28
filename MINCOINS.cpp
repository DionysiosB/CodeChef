#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        if(x % 5){puts("-1");}
        else{printf("%ld\n", (x / 10) + (x % 10 > 0));}
    }   

}
