#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a(0), b(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            a += (x > 0); b += (x < 0);
        }

        bool resA = ((-2 < (a - b)) && ((a - b) < 2));
        bool resB = ((b - a == 2) || (a - b == 2)) && (a % 2 == 0) && (b % 2 == 0);
        bool res = resA || resB;

        puts(res ? "Yes" : "No");
    }

}
