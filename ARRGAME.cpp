#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mxa(-1), mxb(-1), cur(0);
        for(long p = 0; p <= n; p++){
            long x;  (p < n) ? scanf("%ld", &x) : (x = 1);
            if(x == 0){++cur;}
            else if(x == 1){
                if(cur >= mxa){mxb = mxa; mxa = cur;}
                else if(cur > mxb){mxb = cur;}
                cur = 0;
            }
        }

        bool res = (mxa % 2) && (mxa > 2 * mxb);
        puts(res ? "Yes" : "No");
    }

}
