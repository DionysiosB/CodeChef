#include <cstdio>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool fail(false), excel(false);
        long sum(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x <= 2){fail = true;}
            if(x == 5){excel = true;}
            sum += x;
        }

        puts((excel && (!fail) && excel && (sum >= 4 * n)) ? "Yes" : "No");
    }

    return 0;
}
