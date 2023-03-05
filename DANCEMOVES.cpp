#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        if(x == y){puts("0"); continue;}
        else if(y > x){
            long diff = y - x;
            printf("%ld\n", (diff + (diff % 2)) / 2 + (diff % 2));
        }
        else{printf("%ld\n", x - y);}
    }

}
