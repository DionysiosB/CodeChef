#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        if(x < y && x < z){puts("NOTHING");}
        else if(y <= x){puts("PIZZA");} 
        else if(z <= x){puts("BURGER");}
    }

}
