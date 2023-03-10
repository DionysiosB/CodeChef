#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long X, Y, P ,Q; scanf("%ld %ld %ld %ld", &X, &Y, &P, &Q);
        long diff = X + 10 * P - (Y + 10 * Q);
        if(diff){puts(diff < 0 ? "Chef" : "Chefina");}
        else{puts("Draw");}
    }


}
