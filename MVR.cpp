#include <cstdio>

int main(){
    long a, b, x, y; scanf("%ld %ld %ld %ld", &a, &b, &x, &y);
    long u(2 * a + b), v(2 * x + y);
    if(u == v){puts("Equal");}
    else{puts(u > v ? "Messi" : "Ronaldo");}
}
