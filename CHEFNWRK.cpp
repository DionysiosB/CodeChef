#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long cnt(0), cur(0); bool possible(true);
        for(long p = 0; p < n; p++){
            long w; scanf("%ld", &w);
            if(w > k){possible = false; continue;}
            else if(cur + w > k){++cnt; cur = w;}
            else{cur += w;}
        }

        cnt += (cur > 0);
        printf("%ld\n", possible ? cnt : -1);
    }

}
