#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    const int N = 32;
    std::vector<int64_t> a(N, 0);
    int64_t n; scanf("%lld", &n);
    while(n--){
        int64_t x; scanf("%lld", &x);
        for(int64_t p = 0; p < N; p++){
            a[p] += (x % 2);
            x /= 2;
            if(x <= 0){break;}
        }
    }

    int64_t sum(0);
    int64_t binPower(1);
    for(int64_t p = 0; p < N; p++){
        sum += (a[p] * (a[p] - 1) / 2) * binPower;
        binPower *= 2;
    }
    printf("%lld\n", sum);

    return 0;
}
