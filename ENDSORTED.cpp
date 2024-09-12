#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a(0), b(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == 1){a = p;}
            else if(x == n){b = p;}
        }

        printf("%ld\n", a + (n - 1 - b) - (b < a));
    }

}
