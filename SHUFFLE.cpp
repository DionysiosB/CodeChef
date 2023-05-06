#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld",&t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<std::vector<long> > b(k);
        std::vector<long> a(n); 
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            b[p % k].push_back(a[p]);
        }

        for(long p = 0; p < k; p++){
            sort(b[p].begin(), b[p].end());
            for(long u = 0; u < b[p].size(); u++){a[k * u + p] = b[p][u];}
        }

        bool res(true);
        for(long p = 1; p < n; p++){if(a[p - 1] > a[p]){res = false; break;}}
        puts(res ? "yes" : "no");
    }

}
