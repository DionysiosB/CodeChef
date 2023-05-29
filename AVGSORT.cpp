#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
    
        long n; scanf("%ld", &n);
        long last(1e9+7); bool res(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x > last){res = true;}
            last = x;
        }

        puts(res ? "Yes" : "No");
    }


}
