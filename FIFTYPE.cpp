#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n == 50){puts("0");}
        else if(n < 50){
            long diff = 50 - n;
            printf("%ld\n", (diff / 2) + 3 * (diff % 2));
        }
        else if(n > 50){
            long diff = n - 50;
            printf("%ld\n", (diff / 3) + 2 * (diff % 3));
        }

    }

}
