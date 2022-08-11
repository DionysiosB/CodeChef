#include <cstdio>

int main(){
    long t; scanf("%ld", &t);
    while(t--){
        long r; scanf("%ld", &r);
        if(r < 1600){puts("3");}
        else if(r < 2000){puts("2");}
        else{puts("1");}
    }

}
