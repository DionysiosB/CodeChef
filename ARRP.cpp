#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n);
        std::vector<long> s(n);

        long cs(0), mx(0);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            cs += a[p]; s[p] = cs;
            mx = (mx > a[p]) ? mx : a[p];
        }

        sort(s.begin(), s.end());

        std::vector<int> res(n + 1, 0);
        for(long p = 1; p <= n; p++){
            if(cs % p != 0){continue;}
            long u = cs / p;
            if(mx > u){continue;}
            bool possible(true);
            for(long k = 1; k <= p; k++){if(*lower_bound(s.begin(), s.end(), k * u) != (k * u)){possible = false; break;}}
            if(possible){res[p] = 1;}
        }

        for(long p = 1; p <= n; p++){printf("%d", res[p]);}; puts("");
    }

    return 0;
}
