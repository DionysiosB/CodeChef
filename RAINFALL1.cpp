#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        if(x < 3){puts("LIGHT");}
        else if(x < 7){puts("MODERATE");}
        else{puts("HEAVY");}
    }

}
