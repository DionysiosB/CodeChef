#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, x, y; scanf("%ld %ld %ld %ld", &a, &b, &x, &y);
        long diff = a * y - b * x;
        if(diff < 0){puts("Chef");}
        else if(diff > 0){puts("Chefina");}
        else{puts("Both");}

    }   

}
