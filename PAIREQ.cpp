#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        long mx(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            ++m[x];
            mx = (mx > m[x]) ? mx : m[x];
        }

        printf("%ld\n", n - mx);
    }   

}
