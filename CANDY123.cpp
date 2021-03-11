#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        for(long p = 1; p < 1000; p++){
            if(p & 1){a -= p;}
            else{b -= p;}
            if(a < 0){puts("Bob"); break;}
            else if(b < 0){puts("Limak"); break;}
        }
    }

    return 0;
}
