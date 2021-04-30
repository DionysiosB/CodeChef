#include <cstdio>
#include <vector>

int main(){

    const long N = 5;
    const long B = 500;
    const long X = 107; 
    std::vector<long> t(N); for(long p = 0; p < N; p++){t[p] = p - N / 2;}
    std::vector<long> c(N); for(long p = 0; p < N; p++){scanf("%ld", &c[p]);}
    
    std::vector<std::vector<long> > f(X, std::vector<long>(2 * B + 1, -1));
    f[0][B] = 0;
    for(long k = 1; k < X; k++){
        for(long b = 0; b <= 2 * B; b++){
            for(long u = 0; u < N; u++){
                if(b - t[u] < 0){continue;}
                if(b - t[u] >= 2 * B){continue;}
                if(f[k - 1][b - t[u]] < 0){continue;}
                long cand = f[k - 1][b - t[u]] + c[u];
                if((f[k][b] < 0) || (cand < f[k][b])){f[k][b] = cand;}
            }
        }
    }

    long q; scanf("%ld\n", &q);
    while(q--){long x, y; scanf("%ld %ld", &x, &y); printf("%ld\n", f[x][B + y]);}

    return 0;
}
