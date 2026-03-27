#include <cstdio>

int main(){
    long x, n, m; scanf("%ld %ld %ld", &x, &n, &m);
    puts(x + m >= n ? "YES" : "NO");
}
