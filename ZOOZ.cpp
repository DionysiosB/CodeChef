#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 2){for(long p = 0; p < n; p++){printf("%ld", p % 2);}}
        else{
            for(long p = 0; p < n; p++){
                if(p == 0 || p == n - 1){printf("1");}
                else{printf("0");}
            }
        }

        puts("");
    }   

}
