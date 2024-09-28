#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        sort(v.begin(), v.end());

        bool possible(true); long res(0);
        for(long p = n - 1; possible && p >= 0; p--){
            if(v[p] > p + 1){possible = false;}
            else{res += p + 1 - v[p];}
        }
        printf("%ld\n", possible ? res : -1);
    }

}
