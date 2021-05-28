#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    std::vector<long> left(n, 0);
    for(long p = 1; p < n; p++){left[p] = left[p - 1] + a[p - 1];}

    long sum(0);
    for(long p = 0; p < n; p++){sum += p * a[p] - left[p];}
    printf("%ld\n", sum);

    return 0;
}
