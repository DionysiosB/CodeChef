#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n == 1){puts("1"); continue;}
        else if((n & (n - 1)) == 0){puts("-1"); continue;}
        else{
            std::vector<long> v(n + 1);
            v[1] = 2; v[2] = 3; v[3] = 1;
            for(long p = 4; p <= n; p++){
                if((p & (p - 1)) == 0){v[p] = p + 1;}
                else if(((p - 2) & (p - 1)) == 0){v[p] = p - 1;}
                else{v[p] = p;}
            }

            for(long p = 1; p <= n; p++){printf("%ld ", v[p]);}
            puts("");
        }
    }
}
