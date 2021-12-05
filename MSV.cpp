#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> div;
        long mxs(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(div.count(x) && div[x] > mxs){mxs = div[x];}

            for(long u = 1; u * u <= x; u++){
                if(x % u){continue;}
                ++div[u];
                if(u * u != x){++div[x / u];}
            }
        }

        printf("%ld\n", mxs);
    }

    return 0;
}
