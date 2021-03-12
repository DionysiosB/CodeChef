#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b; std::cin >> a >> b;
        long cnt(0);
        for(long p = 0; p < n; p++){cnt += (a[p] == b[p]);}
        long gn(0);
        for(long p = 0; p <= n; p++){
            long w; scanf("%ld", &w);
            if(p <= cnt){gn = (gn > w) ? gn : w;}
            if(p == n && cnt == n){gn = w;}
        }

        printf("%ld\n", gn);
    }

    return 0;
}
