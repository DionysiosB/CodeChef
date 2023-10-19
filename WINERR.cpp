#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        a = (a > b) ? a : b;
        c = (c > d) ? c : d;
        if(a < c){puts("P");}
        else if(a > c){puts("Q");}
        else{puts("TIE");}
    }   

}
