#include <cstdio>

int main(){

    const long R = 1000;
    const long L = 100;

    int t; scanf("%d", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long count(0), first(-1);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            count += (x == 0);
            if((x == 0) && (first < 0)){first = p;}
        }

        long total = R * count + L * (first >= 0) * (n - first);
        printf("%ld\n", total);
    }

    return 0;
}
