#include <cstdio>

int main(){

    long a, b, c, x; scanf("%ld %ld %ld %ld", &a, &b, &c, &x);
    puts((a == x || b == x || c == x) ? "Yes" : "No");

}
