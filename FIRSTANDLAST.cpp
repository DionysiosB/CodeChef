#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long res(a[0] + a[n - 1]);
        for(long p = 1; p < n; p++){
            long s = a[p - 1] + a[p];
            res = (res > s) ? res : s;
        }

        printf("%ld\n", res);
    }   

}
