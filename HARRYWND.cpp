#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> mn(n + 1, -1), mx(n + 1, -1);
    mn[0] = mx[0] = 0;

    while(k--){
        long x; scanf("%ld", &x);
        for(long p = x; p <= n; p++){
            if(mn[p - x] >= 0){if((mn[p] < 0) || (mn[p - x] + 1 < mn[p])){mn[p] = mn[p - x] + 1;}}
            if(mx[p - x] >= 0){mx[p] = (mx[p] > (mx[p - x] + 1)) ? mx[p] : (mx[p - x] + 1);}
        }
    }

    printf("%ld %ld\n", mn[n], mx[n]);

    return 0;
}
