#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long v[11] = {0};
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++v[x];}
        long mx(0), which(0); bool confused(false);
        for(long p = 1; p <= 10; p++){
            if(v[p] > mx){confused = false; mx = v[p]; which = p;}
            else if(v[p] == mx){confused = true;}
        }

        if(confused){puts("CONFUSED");}
        else{printf("%ld\n", which);}
    }

}
