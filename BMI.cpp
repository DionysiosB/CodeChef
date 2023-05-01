#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long m, h; scanf("%ld %ld", &m, &h);
        m /= (h * h);
        printf("%d\n", 1 + (m > 18) + (m > 24) + (m > 29));
    }

}
