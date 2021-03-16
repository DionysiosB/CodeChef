#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        bool good(true);
        for(long p = 0; p < n; p++){
            if(!good){break;}
            for(long q = p + 2; q < n; q++){if(a[p] > a[q]){good = false;}}
        }

        puts(good ? "YES" : "NO");
    }

    return 0;
}
