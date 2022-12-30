#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long solved(0); bool slow(false), bot(true);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x >= 0){
                ++solved;
                if(x > 1){bot = false;}
                if(x > k){slow = true;}
            }
        }

        if(solved < (n + 1) / 2){puts("Rejected");}
        else if(slow){puts("Too Slow");}
        else if(bot && solved == n){puts("Bot");}
        else{puts("Accepted");}
    }

}
