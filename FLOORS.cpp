#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        long res = ((x - 1) / 10) - ((y - 1) / 10);
        if(res < 0){res = -res;}
        printf("%ld\n", res);
    }   

}
