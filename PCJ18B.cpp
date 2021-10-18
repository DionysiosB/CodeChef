#include<cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld",&n);
        long long sum(0);
        for(long p = n; p >= 0; p -= 2){sum+=p*p;}
        printf("%lld\n", sum);    
    }

    return 0;
}
