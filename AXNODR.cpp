#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 4 > 1){puts("3");}
        else if(n % 4){printf("%ld\n", n);}
        else{printf("%ld\n", n + 3);}
    }

}
