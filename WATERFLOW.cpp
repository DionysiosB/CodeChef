#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long w, x, y, z; scanf("%ld %ld %ld %ld", &w, &x, &y, &z);
        long res = w + y * z - x;
        if(res < 0){puts("unfilled");}
        else if(res > 0){puts("overflow");}
        else{puts("filled");}
    }   

}
