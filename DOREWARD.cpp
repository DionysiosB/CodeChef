#include <cstdio>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        if(x > 6){puts("GOLD");}
        else if(x > 3){puts("SILVER");}
        else{puts("BRONZE");}
    }
}
