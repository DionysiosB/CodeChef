#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        long hor(-1), ver(0);
        for(long p = n - 1; p > 0; p--){
            if(a[p] != a[p - 1]){continue;}
            --p;
            if(hor < 0){hor = a[p];}
            else{ver = a[p]; break;}
        }

        if(hor > 0 && ver > 0){printf("%ld\n", hor * ver);}
        else{puts("-1");}
    }

    return 0;
}
