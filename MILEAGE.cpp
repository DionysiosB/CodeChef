#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, y, a, b; scanf("%ld %ld %ld %ld %ld", &n, &x, &y, &a, &b);
        long diff = x * b - y * a;
        if(diff < 0){puts("PETROL");}
        else if(diff > 0){puts("DIESEL");}
        else{puts("ANY");}
    }   

}
