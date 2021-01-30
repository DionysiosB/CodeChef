#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> f(n); for(long p = 0; p < n; p++){scanf("%ld", &f[p]);}
        std::vector<long> g(n); for(long p = 0; p < n; p++){scanf("%ld", &g[p]);}

        bool front(true);
        for(long p = 0; p < n; p++){if(f[p] > g[p]){front = false; break;}}
        bool back(true);
        for(long p = 0; p < n; p++){if(f[p] > g[n - 1 - p]){back = false; break;}}
        if(front && back){puts("both");}
        else if(front){puts("front");}
        else if(back){puts("back");}
        else{puts("none");}
    }

    return 0;
}
