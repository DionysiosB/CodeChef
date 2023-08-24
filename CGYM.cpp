#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        if(x + y <= z){puts("2");}
        else if(x <= z){puts("1");}
        else{puts("0");}
    }   

}
