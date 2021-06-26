#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, s; scanf("%ld %ld %ld", &n, &x, &s);
        while(s--){
            long a, b; scanf("%ld %ld", &a, &b);
            if(x == a){x = b;}
            else if(x == b){x = a;}
        }
        printf("%ld\n", x);
    }

    return 0;
}
