#include <cstdio>

int main() {

    long t; scanf("%ld", &t);
    while (t--) {
        double a, v; scanf("%lf %lf", &a, &v);
        double ans = (2 * a) / (3 * v);
        printf("%.9lf\n", ans);
    }

    return 0;
}
