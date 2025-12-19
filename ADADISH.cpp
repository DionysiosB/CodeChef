#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        long res(0);
        if(n == 1){res = a[0];}
        else if(n == 2){res = a[1];}
        else if(n == 3){
            long u = a[0] + a[1];
            long v = a[2];
            res = (u > v) ? u : v;
        }
        else if(n == 4){
            long u = a[0] + a[3];
            long v = a[1] + a[2];
            res = (u > v) ? u : v;
            
            u = a[0] + a[1] + a[2];
            v = a[3];
            long w = (u > v) ? u : v;
            res = (res < w) ? res : w;
        }

        printf("%ld\n", res);
    }

}
