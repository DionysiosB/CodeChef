#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, y; scanf("%ld %ld %ld", &n, &x, &y);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        bool possible(true);
        for(long p = 0; p < n; p++){
            long b; scanf("%ld", &b);
            long diff = b - a[p];
            if(diff != x && diff != y){possible = false;}
        }

        puts(possible ? "Yes" : "No");
    }

}
