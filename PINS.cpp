#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("1 1");
        for(long p = 0; p < n / 2; p++){printf("0");}
        puts("");
    }

    return 0;
}
