#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        x += y;
        if(x >= 6){puts("0");}
        else{printf("%.8lf\n", 1 - x / 6.0);}
    }

}
