#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        int s(0);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            s = (s ^ x);
        }

        puts(s ? "NO" : "YES");
    }

}
