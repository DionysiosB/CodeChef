#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, u, d; scanf("%ld %ld %ld", &n, &u, &d);
        bool par(true);
        std::vector<long> h(n); for(long p = 0; p < n; p++){scanf("%ld", &h[p]);}
        long cur(h[0]), ind(n);
        for(long p = 1; p < n; p++){
            if(h[p] > h[p - 1] + u){ind = p; break;}
            else if(h[p] < h[p - 1] - d){
                if(par){par = false;}
                else{ind = p; break;}
            }
        }

        printf("%ld\n", ind);
    }

    return 0;
}
