#include <cstdio>
#include <cmath>

int main(){

    long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
    double d = sqrt(b * b - 4 * a * c);
    printf("%.7lf\n%.7lf\n", (-b + d) / (2 * a), (-b - d) / (2 * a));

    return 0;
}
