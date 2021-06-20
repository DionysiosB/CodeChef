#include <cstdio>

int main(){

    long z; scanf("%ld", &z);
    while(z--){
        long x1, x2, x3, v1, v2; scanf("%ld %ld %ld %ld %ld", &x1, &x2, &x3, &v1, &v2);
        double t1 = (1.0 * x3 - x1) / v1;
        double t2 = (1.0 * x2 - x3) / v2;
        if(t1 < t2){puts("Chef");}
        else if(t2 < t1){puts("Kefa");}
        else{puts("Draw");}
    }

    return 0;
}
