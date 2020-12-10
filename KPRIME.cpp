#include <cstdio>
#include <vector>

std::vector<int> countPrimes(long n){

    std::vector<int> cpv(n, 0);
    for(long p = 2; p < n; p++){
        if(cpv[p] > 0){continue;}
        cpv[p] = 1;
        for(long q = 2 * p; q < n; q += p){++cpv[q];}
    }

    return cpv;
}

int main(){

    const long N = 100005;
    const int K = 5;
    std::vector<int> cp = countPrimes(N);
    std::vector<std::vector<int> > cumf(cp.size(), std::vector<int>(K + 1, 0));
    for(long p = 2; p < cp.size(); p++){for(long q = 0; q <= K; q++){cumf[p][q] = cumf[p - 1][q] + (cp[p] == q);}}

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, k; scanf("%ld %ld %ld", &a, &b, &k);
        long ans = cumf[b][k] - cumf[a - 1][k];
        printf("%ld\n", ans);
    }

    return 0;
}
