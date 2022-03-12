#include <cstdio>

int main(){

    long r; scanf("%ld", &r);
    if(1 <= r && r <= 50){puts("100");}
    else if(51 <= r && r <= 100){puts("50");}
    else{puts("0");}

}
