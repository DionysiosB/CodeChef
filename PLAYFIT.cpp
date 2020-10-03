#include <cstdio>
#include <vector>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); 
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long m(a[0]), M(a[n - 1]);
        std::vector<long> left(n, 0); 
        std::vector<long> right(n, 0); 
        for(long p = 0; p < n; p++){left[p] = m = (a[p] < m) ? a[p] : m;}
        for(long p = n - 1; p >= 0; p--){right[p] = M = (a[p] > M) ? a[p] : M;}
        long best(-1);

        for(long p = 0; p < n; p++){best = (best > right[p] - left[p]) ? best : (right[p] - left[p]);}
        if(best > 0){printf("%ld\n", best);}
        else{puts("UNFIT");}
    }

    return 0;
}
