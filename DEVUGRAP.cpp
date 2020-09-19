#include <cstdio>
#include <iostream>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int64_t n, k; scanf("%lld %lld", &n, &k);
        int64_t count(0);
        while(n--){
            int64_t a; scanf("%lld", &a);
            if(a < k){count += (k - a);}
            else{
                int64_t u = a % k;
                if(u > k - u){u = k - u;}
                count += u;
            }
        }

        printf("%lld\n", count);
    }

    return 0;
}
