#include <cstdio>
#include <map>

int main(){

    const int N = 11;
    long t; scanf("%ld", &t);
    while(t--){
        long f[N] = {0};
        long n; scanf("%ld", &n);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++f[x];}
        //for(long p = 1; p < N; p++){printf("f %ld->%ld\n", p, f[p]);}; puts("");

        std::map<long, long> g;
        long mx(0), mode(0);
        for(long p = 1; p < N; p++){
            long val = f[p];
            if(!val){continue;}
            ++g[val];
            if(g[val] > mx){mx = g[val]; mode = val;}
        }

        //for(std::map<long, long>::iterator it = g.begin(); it != g.end(); it++){printf("%ld->%ld\n", it->first, it->second);}

        printf("%ld\n", mode);
    }

}
