#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); bool possible(true);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            if(p && (a[p - 1] % a[p])){possible = false;}
        }

        if(!possible){puts("-1");}
        else{
            for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
            puts("");
        }
    }


}
