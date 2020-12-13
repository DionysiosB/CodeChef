#include <cstdio>
#include <vector>

int main(){

    const int H = 50;
    int t; scanf("%d", &t);
    while(t--){
        std::vector<std::vector<int> > comp(H, std::vector<int>(H, 0));
        int n; scanf("%d", &n);
        while(n--){
            long s, e, c; scanf("%ld %ld %ld", &s, &e, &c);
            comp[s][e] = (comp[s][e] > c) ? comp[s][e] : c;
        }

        std::vector<long> f(H);
        for(long e = 0; e < H; e++){
            for(long s = 0; s < e; s++){
                long cand = f[s] + comp[s][e];
                f[e] = (f[e] > cand) ? f[e] : cand;
            }
        }

        printf("%ld\n", f.back());
    }

    return 0;
}
