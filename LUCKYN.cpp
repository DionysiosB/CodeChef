#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        bool ans(false);
        while(x){
            if(x % 10 == 7){ans = true; break;}
            x /= 10;
        }

        puts(ans ? "YES" : "NO");
    }

}
