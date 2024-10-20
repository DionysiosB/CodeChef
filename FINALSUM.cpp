#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, q; scanf("%ld %ld", &n, &q);
        std::vector<long> a(n); long sum(0);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]); sum += a[p];}
        while(q--){
            long left, right; scanf("%ld %ld", &left, &right);
            sum += 1 - ((right - left) % 2);
        }

        printf("%ld\n", sum);
    }

}
