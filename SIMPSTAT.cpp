#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        double avg(0);
        for(long p = k; p < n - k; p++){avg += a[p];}
        avg /= (n - 2 * k);
        printf("%.7lf\n", avg);
    }

    return 0;
}
