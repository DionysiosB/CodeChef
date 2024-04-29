#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long deg(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(a){deg = p;}
        }

        printf("%ld\n", deg);
    }   

}
