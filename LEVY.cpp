#include <cstdio>
#include <iostream>
#include <vector>

std::vector<long> getPrimes(long B){
    std::vector<bool> isPrime(B, 1);
    std::vector<long> primeVec;
    isPrime[0] = isPrime[1] = 0;
    for(long p = 2; p < B; p++){
        if(!isPrime[p]){continue;}
        primeVec.push_back(p);
        for(long q = 2 * p; q < B; q += p){isPrime[q] = 0;}
    }

    return primeVec;
}

std::vector<long> countCombinations(std::vector<long> a){

    std::vector<long> v(3 * a.back() + 10, 0);
    for(long x = 0; x < a.size(); x++){for(long y = 0; y < a.size(); y++){++v[a[x] + 2 * a[y]];}}
    return v;
}

int main(){

    const long N = 10007;
    std::vector<long> primeList = getPrimes(N + 1);
    std::vector<long> combs = countCombinations(primeList);

    long t; scanf("%ld", &t);
    while(t--){long n; scanf("%ld", &n); printf("%ld\n", combs[n]);}


    return 0;
}
