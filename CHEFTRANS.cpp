#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        x += y;
        if(x == z){puts("EQUAL");}
        else{puts(x < z ? "PLANEBUS" : "TRAIN");}
    }

}
