#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a[n], b[n];
        for(long p = 0; p < n; p++){scanf("%ld", a + p);}
        for(long p = 0; p < n; p++){scanf("%ld", b + p);}
        long totalf(0), totals(0);
        for(long p = 0; p < n; p++){
            totalf += (p % 2) * a[p] + ((p + 1) % 2) * b[p];
            totals += (p % 2) * b[p] + ((p + 1) % 2) * a[p];
        }

        long minTime = (totalf < totals) ? totalf : totals;
        printf("%ld\n", minTime);
    }

    return 0;
}
