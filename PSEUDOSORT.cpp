#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        bool used(false), possible(true);
        for(long p = 1; possible && p < n; p++){
            if(a[p - 1] <= a[p]){continue;}
            else if(used){possible = false;}
            else{
                used = true;
                long x = a[p - 1]; a[p - 1] = a[p]; a[p] = x;
                if(p > 1 && a[p - 2] > a[p - 1]){possible = false;}
            }
        }

        puts(possible ? "YES" : "NO");
    }

}
