#include <cstdio>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        long long n; scanf("%lld\n", &n);
        for(long long p = 0; p < n; p++){long a; scanf("%ld", &a);}  //Irrelevant
        printf("%lld\n", n * (n - 1) / 2);

    }

    return 0;
}
