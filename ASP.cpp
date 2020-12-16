#include <cstdio>
#include <vector>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        bool swap(false), almost(true);
        for(long p = 0; p < n - 1; p++){
            if(a[p] <= a[p + 1]){swap = false; continue;}
            if(swap){almost = false; break;}
            if((p > 0) && a[p - 1] > a[p + 1]){almost = false; break;}
            a[p + 1] = a[p]; swap = true;
        }

        puts(almost ? "YES" : "NO");
    }

    return 0;
}
