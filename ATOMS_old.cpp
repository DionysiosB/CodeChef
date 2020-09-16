#include <cstdio>
#include <cmath>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        double n, k, m; scanf("%lf %lf %lf", &n, &k, &m);
        int ans = log(m / n) / log(k);
        if(ans < 0 || m <= n){ans = 0;}
        printf("%d\n", ans);
    }

    return 0;
}
