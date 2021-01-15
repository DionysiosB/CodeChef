#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        long popular(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(m.count(a) == 0){m[a] = 1;}
            else{++m[a];}
            popular = (popular > m[a]) ? popular : m[a];
        }

        printf("%ld\n", (2 * popular > n) ? popular : ((n + 1) / 2));
    }

    return 0;
}
