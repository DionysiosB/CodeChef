#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long D, d, a, b, c; scanf("%ld %ld %ld %ld %ld", &D, &d, &a, &b, &c);
        d *= D;
        if(d < 10){puts("0");}
        else if(d < 21){printf("%ld\n", a);}
        else if(d < 42){printf("%ld\n", b);}
        else{printf("%ld\n", c);}
    }

}
