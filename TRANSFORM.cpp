#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        if(x % 3 == 0){puts("NORMAL");}
        else if(x % 3 == 1){puts("HUGE");}
        else if(x % 3 == 2){puts("SMALL");}
    }   

}
