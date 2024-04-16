#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long p; scanf("%ld", &p);
        long res = (p / 100) + (p % 100);
        long tst = 100 * (p / 100) + (p % 100);
        if(res > 10 || tst != p){puts("-1");}
        else{printf("%ld\n", res);}

    }   

}
