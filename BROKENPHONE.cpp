#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        if(x < y){puts("REPAIR");}
        else if(y < x){puts("NEW PHONE");}
        else{puts("ANY");}

    }   

}
