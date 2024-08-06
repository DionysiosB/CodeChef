#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long res(0);
        if(n % 2 && m % 2){res = n + m - 1;}
        else if(n % 2){res = m;}
        else if(m % 2){res = n;}
        else{res = 0;}

        printf("%ld\n", res);
    }   

}
