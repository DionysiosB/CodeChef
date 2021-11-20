#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0); bool valid(true);
        while(n--){
            long x; scanf("%ld", &x); 
            cnt += (x > 0) ? 1 : -1;
            if(cnt < 0){valid = false;}
        }
        puts(valid ? "Valid" : "Invalid");
    }

    return 0;
}
