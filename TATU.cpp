#include <cstdio>
#include <set>

int main(){

    long x, y; scanf("%ld %ld", &x, &y);
    long mn = (x < y) ? x : y;
    std::set<long> div;
    for(long p = 1; p * p <= mn; p++){
        if(mn % p){continue;}
        if(x % p == 0 && y % p == 0){div.insert(p);}
        long q = mn / p;
        if(x % q == 0 && y % q == 0){div.insert(q);}
    }
    printf("%ld\n", div.size());

    return 0;
}
