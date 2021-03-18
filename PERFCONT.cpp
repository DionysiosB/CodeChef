#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, r; scanf("%ld %ld", &n, &r);
        long easy(0), hard(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x >= r / 2){++easy;}
            if(x <= (r / 10)){++hard;}
        }

        puts( ((easy == 1) && (hard == 2)) ? "yes" : "no");
    }

    return 0;
}
