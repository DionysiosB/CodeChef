#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        long f(0); bool dominant(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            ++m[x];
            if(m[x] > f){f = m[x]; dominant = true;}
            else if(m[x] == f){dominant = false;}
        }

        puts(dominant ? "YES" : "NO");
    }

}
