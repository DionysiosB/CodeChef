#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        bool rb(true);
        for(long p = 0; 2 * p < n; p++){if(a[p] != a[n - 1 - p]){rb = false; break;}}
        for(long p = 1; 2 * p < n; p++){if((a[p - 1] != a[p]) && (a[p] - a[p - 1] != 1)){rb = false; break;}}
        for(long p = n / 2 + 1; p < n; p++){if((a[p - 1] != a[p]) && (a[p - 1] - a[p] != 1)){rb = false; break;}}
        std::vector<bool> b(8);
        for(long p = 0; p < n; p++){b[a[p]] = 1;}
        for(long p = 1; p <= 7; p++){if(!b[p]){rb = false; break;}}
        puts(rb ? "yes" : "no");
    }

    return 0;
}
