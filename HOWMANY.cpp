#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    if(n < 10){puts("1");}
    else if(n < 100){puts("2");}
    else if(n < 1000){puts("3");}
    else{puts("More than 3 digits");}

    return 0;
}
