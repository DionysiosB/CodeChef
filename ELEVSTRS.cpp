#include <cstdio>
#include <cmath>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; double v1, v2; scanf("%ld %lf %lf", &n, &v1, &v2);
        puts(sqrt(2) * v1 < v2 ? "Elevator" : "Stairs");
    }

    return 0;
}
