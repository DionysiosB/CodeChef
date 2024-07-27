#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x1, x2, y1, y2; scanf("%ld %ld %ld %ld", &x1, &x2, &y1, &y2);
        long res = y1 * x2 - x1 * y2;
        if(res < 0){puts("-1");}
        else if(res > 0){puts("1");}
        else{puts("0");}
    }   

}
