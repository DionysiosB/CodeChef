#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        if(a == 0){puts("Liquid");}
        else if(b == 0){puts("Solid");}
        else{puts("Solution");}
    }

}
