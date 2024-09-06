#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, c; scanf("%ld %ld", &a, &c);
        if( (a + c) % 2){puts("-1");}
        else{printf("%ld\n", (a + c) / 2);}
    }   

}
