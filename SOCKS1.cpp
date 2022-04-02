#include <cstdio>

int main(){

    long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
    bool ans = (a == b) || (a == c) || (b == c);
    puts(ans ? "YES" : "NO");
}
