#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long ta(0), mxa(0), tb(0), mxb(0);
        for(long p = 0; p < n; p++){long z; scanf("%ld", &z); ta += z; mxa = (mxa > z) ? mxa : z;}
        for(long p = 0; p < n; p++){long z; scanf("%ld", &z); tb += z; mxb = (mxb > z) ? mxb : z;}
        ta -= mxa; tb -= mxb;
        if(ta == tb){puts("Draw");}
        else{puts(ta < tb ? "Alice" : "Bob");}
    }

    return 0;
}
