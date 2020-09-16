#include <cstdio>
#include <cmath>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        double n, k, m; scanf("%lf %lf %lf", &n, &k, &m);
        int count(0);
        while(m >= n){m /= k; ++count;}
        if(count > 0){--count;}

        printf("%d\n", count);
    }

    return 0;
}
