#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mx(0), cx(0), sm(0), cs(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x > mx){
                sm = mx; cs = cx;
                mx = x; cx = 1;
            }
            else if(x == mx){++cx;}
            else if(x > sm){sm = x; cs = 1;}
            else if(x == sm){++cs;}
        }

        long num = (cx > 1) ? (cx * (cx - 1) / 2) : cs;
        double ratio = 2.0 * num / (n * (n - 1));
        printf("%.7lf\n", ratio);
    }

    return 0;
}
