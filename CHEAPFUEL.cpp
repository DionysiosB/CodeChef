#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, a, b, k; scanf("%ld %ld %ld %ld %ld", &x, &y, &a, &b, &k);
        long diff = x + a * k - y - b * k;
        if(diff == 0){puts("SAME PRICE");}
        else{puts(diff < 0 ? "PETROL" : "DIESEL");}
    }

}
