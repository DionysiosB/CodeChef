#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long res(a);
        if(a <= b && b <= c){res = c - a;}
        if(a <= c && c <= b){res = b - a;}
        if(b <= a && a <= c){res = c - b;}
        if(b <= c && c <= a){res = a - b;}
        if(c <= a && a <= b){res = b - c;}
        if(c <= b && b <= a){res = a - c;}
        printf("%ld\n", res);
    }   

}
