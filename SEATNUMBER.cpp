#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n <= 10){puts("Lower Double");}
        else if(n <= 15){puts("Lower Single");}
        else if(n <= 25){puts("Upper Double");}
        else if(n <= 30){puts("Upper Single");}
    }

}
