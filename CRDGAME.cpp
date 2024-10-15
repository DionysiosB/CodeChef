#include <cstdio>

int digsum(long x){
    long sum(0);
    while(x){sum += (x % 10); x /= 10;}
    return sum;
}


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long sa(0), sb(0);
        for(long p = 0; p < n; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            x = digsum(x); y = digsum(y);
            sa += (x >= y); sb += (x <= y);
        }

        if(sa > sb){printf("0 ");}
        else if(sa < sb){printf("1 ");}
        else{printf("2 ");}

        printf("%ld\n", (sa > sb) ? sa : sb);
    }

}
