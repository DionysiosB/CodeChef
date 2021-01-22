#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        long odd(0);
        if(a[1] != a[0] + 1){odd = (a[2] == a[1] + 1) ? a[0] : a[1];}
        else{for(long p = 2; p < n; p++){if(a[p] != a[p - 1] + 1){odd = a[p]; break;}}}
        printf("%ld\n", odd);
    }

    return 0;
}
