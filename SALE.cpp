#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long res(0);
        if(a <= b && a <= c){res = b + c;}
        else if(b <= a && b <= c){res = a + c;}
        else if(c <= a && c <= b){res = a + b;}
        printf("%ld\n", res);
    }   

}
