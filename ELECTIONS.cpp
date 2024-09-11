#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        if(a > b + c){puts("A");}
        else if(b > a + c){puts("B");}
        else if(c > a + b){puts("C");}
        else{puts("NOTA");}
    }

}
