#include <cstdio>

int main(){


    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long rem(0), day(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x); rem += x;
            if(rem >= k){rem -= k;}
            else if(!day){day = p + 1;}
        }

        if(day){printf("NO %ld\n", day);}
        else{puts("YES");}
    }

}
