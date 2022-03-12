#include <cstdio>

int main(){

    long m[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long s(a + b), res(0);
        while(s){res += m[s % 10]; s /= 10;}
        printf("%ld\n", res);
    }

}
