#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, a, b, c; scanf("%ld %ld %ld %ld", &x, &a, &b, &c);
        long res(0);
        if(a <= b && b <= c){res = (x - 1) * a + b;}
        else if(a <= c && c <= b){res = (x - 1) * a + c;}
        else if(b <= a && a <= c){res = (x - 1) * b + a;}
        else if(b <= c && c <= a){res = (x - 1) * b + c;}
        else if(c <= a && a <= b){res = (x - 1) * c + a;}
        else if(c <= b && b <= a){res = (x - 1) * c + b;}
        printf("%ld\n", res);
    }   

}
