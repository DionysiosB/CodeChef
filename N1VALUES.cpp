#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        int n; scanf("%d", &n);
        printf("1 ");
        ll x(1); for(long p = 0; p < n; p++){printf("%lld ", x); x *= 2;}
        puts("");
    }

}
