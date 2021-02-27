#include <cstdio>
#include <vector>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long n, q; scanf("%ld %ld", &n, &q);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    std::vector<std::vector<long> > b(n, std::vector<long>(n, 0));
    for(long p = 1; p < n; p++){b[p - 1][p] = gcd(a[p - 1], a[p]);}

    for(long len = 3; len <= n; len++){
        for(long row = 0; row + len - 1 < n; row++){
            long col = row + len - 1;
            b[row][col] = gcd(a[row], a[col]);
            b[row][col] = (b[row][col] > b[row + 1][col]) ? b[row][col] : b[row + 1][col];
            b[row][col] = (b[row][col] > b[row][col - 1]) ? b[row][col] : b[row][col - 1];
        }
    }

    //for(long row = 0; row < n; row++){for(long col = 0; col < n; col++){printf("%ld\t", b[row][col]);}; puts("");}

    while(q--){
        long L, R; scanf("%ld %ld", &L, &R);
        printf("%ld\n", b[L - 1][R - 1]);
    }

    return 0;
}
