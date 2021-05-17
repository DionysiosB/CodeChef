#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);

        std::vector<long> s(2 * n + 1);
        for(long row = 0; row < n; row++){
            for(long col = 0; col < n; col++){
                long x; scanf("%ld", &x);
                s[n + row - col] += x;
            }
        }

        long mx(0);
        for(long p = 0; p < s.size(); p++){mx = (mx > s[p]) ? mx : s[p];}
        printf("%ld\n", mx);
    }

    return 0;
}
