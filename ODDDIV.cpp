#include <cstdio>
#include <iostream>
#include <vector>

std::vector<long> sumOddDivisors(long B){

    std::vector<long> fvec(B, 1);
    for(long p = 3; p < B; p += 2){for(long q = p; q < B; q += p){fvec[q] += p;}}
    return fvec;
}

int main(){

    const long N = 100007;
    std::vector<long> a = sumOddDivisors(N);
    std::vector<int64_t> s(a.size(), 0);
    for(int64_t p = 1; p < s.size(); p++){s[p] = s[p - 1] + a[p];}

    int t; scanf("%d", &t);
    while(t--){
        int64_t l, r; scanf("%lld %lld", &l, &r);
        printf("%lld\n", s[r] - s[l - 1]);
    }

    return 0;
}
