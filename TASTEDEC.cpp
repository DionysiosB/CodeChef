#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        long tst = 2 * x - 5 * y;
        if(tst > 0){puts("Chocolate");}
        else if(tst < 0){puts("Candy");}
        else{puts("Either");}
    }   

}
