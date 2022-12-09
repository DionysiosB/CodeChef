#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        x %= 4;
        if(x == 0){puts("North");}
        else if(x == 1){puts("East");}
        else if(x == 2){puts("South");}
        else if(x == 3){puts("West");}
    }

}
