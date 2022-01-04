#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, x, y; scanf("%ld %ld %ld %ld", &n, &k, &x, &y);
        std::vector<bool> a(n, 0);
        bool ans(false);
        for(long p = 0; p < n; p++){
            if(a[x]){break;}
            else if(x == y){ans = true; break;}
            a[x] = 1; x += k; x %= n;
        }
        puts(ans ? "YES" : "NO");
    }

    return 0;
}
