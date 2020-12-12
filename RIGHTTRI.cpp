#include <cstdio>
#include <cmath>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        double h, s; scanf("%lf %lf", &h, &s);
        if(h * h < 4 * s){puts("-1"); continue;}
        double u = sqrt(h * h + 4 * s);
        double v = sqrt(h * h - 4 * s);
        double a = (u - v) / 2.0;
        double b = (u + v) / 2.0;
        printf("%.4lf %.4lf %.4lf\n", a, b, h);
    }

    return 0;
}
