#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool res(true);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x % 2 == 0){res = false;}
        }
        
        puts(res ? "YES" : "NO");
    }


}
