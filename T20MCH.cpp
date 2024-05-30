#include <cstdio>

int main(){

    long r, o, c; scanf("%ld %ld %ld", &r, &o, &c);
    puts((c + 36 * (20 - o) > r) ? "YES" : "NO");

}
