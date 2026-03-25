#include <cstdio>

int main(){

    long a, b; scanf("%ld %ld", &a, &b);
    long res = a + b + a * b - 111;
    puts(res ? "No" : "Yes");

}
