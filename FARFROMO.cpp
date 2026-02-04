#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long xa, ya, xb, yb; scanf("%ld %ld %ld %ld", &xa, &ya, &xb, &yb);
        long da = xa * xa + ya * ya;
        long db = xb * xb + yb * yb;
        if(da > db){puts("ALEX");}
        else if(da < db){puts("BOB");}
        else{puts("EQUAL");}
    }

}
