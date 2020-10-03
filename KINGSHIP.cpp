#include <cstdio>
#include <iostream>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int64_t n; scanf("%lld", &n);
        int64_t min(1e10), sum(0);
        while(n--){
            int64_t x; scanf("%lld", &x);
            min = (min < x) ? min : x;
            sum += x;
        }

        printf("%lld\n", min * (sum - min));
    }

    return 0;
}
