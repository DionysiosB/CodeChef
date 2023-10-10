#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        if(z % x == 0 && z % y == 0){puts("ANY");}
        else if(z % x == 0){puts("CHICKEN");}
        else if(z % y == 0){puts("DUCK");}
        else{puts("NONE");}

    }   

}
