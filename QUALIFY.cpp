#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, a, b; scanf("%ld %ld %ld", &x, &a, &b);
        puts(a + 2 * b >= x ? "Qualify" : "NotQualify");
    }   

}
