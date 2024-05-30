#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mx(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            mx = (mx > a) ? mx : a;
        }

        printf("%ld\n", mx);

    }   

}
