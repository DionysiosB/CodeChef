#include <cstdio>

int main(){

    long x, y; scanf("%ld %ld", &x, &y);
    if(x * y > 2 * (x + y)){printf("Area\n%ld", x * y);}
    else if(x * y < 2 * (x + y)){printf("Peri\n%ld", 2 * (x + y));}
    else if(x * y == 2 * (x + y)){printf("Eq\n%ld", x * y);}

    return 0;
}
