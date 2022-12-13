#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        if(x == y){puts("0");}
        else if(x < y){
            if((y - x) % 2){puts("1");}
            else if( (y - x) % 4 == 0){puts("3");}
            else{puts("2");}
        }
        else {printf("%ld\n", 1 + ((x - y) % 2));}
    }

}
