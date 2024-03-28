#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long s, x, y, z; scanf("%ld %ld %ld %ld", &s, &x, &y, &z);
        if(x + y + z <= s){puts("0");}
        else if(x + z <= s || y + z <= s){puts("1");}
        else if(z <= s){puts("2");}
        else{puts("-1");}
    }   

}
