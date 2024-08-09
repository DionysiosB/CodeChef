#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a1, a2, b1, b2, c1, c2; scanf("%ld %ld %ld %ld %ld %ld", &a1, &a2, &b1, &b2, &c1, &c2);
        long t1(a1 + a2), t2(b1 + b2), t3(c1 + c2);
        long t = (t1 > t2) ? t1 : t2; t = (t > t3) ? t : t3;
        printf("%ld\n", t);
    }   

}
