#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::vector<long> > a(n, std::vector<long>(n, 0));
        long cur(0);
        for(long s = 0; s < 2 * n - 1; s++){
            for(long row = 0; row < n; row++){
                long col = s - row;
                if(col < 0 || col >= n){continue;}
                a[row][col] = ++cur;
            }
        }

        for(long row = 0; row < n; row++){for(long col = 0; col < n; col++){printf("%ld ", a[row][col]);}; puts("");}

    }

    return 0;
}
