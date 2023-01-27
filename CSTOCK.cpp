#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        double s, a, b, c; scanf("%lf %lf %lf %lf", &s, &a, &b, &c);
        double price = s * (1.0 + 0.01 * c);
        puts( (a <= price) && (price <= b) ? "Yes" : "No");
    }

}
