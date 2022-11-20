#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.rbegin(), a.rend());
        long x(a[0]), y(a[1] + a[2]);
        for(long p = 3; p < n; p++){(p % 2) ? (x += a[p]) : (y += a[p]);}
        if(x == y){puts("draw");}
        else{puts(x > y ? "first" : "second");}
    }

}
