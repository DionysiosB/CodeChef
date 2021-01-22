#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long long> a(n);
        for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}

        std::vector<long long> left(n);
        long long sofar(0), best(-2e15);
        for(long p = 0; p < n; p++){
            if(sofar < 0){sofar = a[p];}
            else{sofar += a[p];}
            left[p] = best = (sofar > best) ? sofar : best;
        }

        sofar = 0; best = -2e15;
        std::vector<long long> right(n);
        for(long p = n - 1; p >= 0; p--){
            if(sofar < 0){sofar = a[p];}
            else{sofar += a[p];}
            right[p] = best = (sofar > best) ? sofar : best;
        }

        best = -2e15;
        for(long p = 0; p + k + 1 < n; p++){
            long long cand = left[p] + right[p + k + 1];
            best = (best > cand) ? best : cand;
        }

        printf("%lld\n", best);
    }

    return 0;
}
