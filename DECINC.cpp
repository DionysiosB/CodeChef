#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    printf("%ld\n", (n % 4) ? (n - 1) : (n + 1));

    return 0;
}
