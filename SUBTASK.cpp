#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        long score(0), first(0); bool flag(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x); 
            score += x;
            if(!x && !flag){first = score; flag = true;}
        }

        if(score >= n){puts("100");}
        else if(first >= m){printf("%ld\n", k);}
        else{puts("0");}
    }

}
