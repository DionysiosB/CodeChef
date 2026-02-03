#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        long fine(0);
        if(x > 100){fine = 2000;}
        else if(x > 70){fine = 500;}
        printf("%ld\n", fine);
    }

}
