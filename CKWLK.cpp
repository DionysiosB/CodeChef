#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long long n; scanf("%lld", &n);
        long t(0), w(0);
        while(n % 10 == 0){n /= 10; ++t;}
        while(n % 2 == 0){n /= 2; ++w;}
        bool res = (n == 1) && (t >= w);
        puts(res ? "Yes" : "No");
    }

}
