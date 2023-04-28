#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        if(x < 100){puts("Easy");}
        else if(x < 200){puts("Medium");}
        else{puts("Hard");}
    }

}
