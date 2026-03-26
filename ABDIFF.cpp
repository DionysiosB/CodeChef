#include <cstdio>

int main(){
    long a, b; scanf("%ld %ld", &a, &b);
    long res = a * b - a - b;
    printf("%ld\n", res > 0 ? res : -res);
}
