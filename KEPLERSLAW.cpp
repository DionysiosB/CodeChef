#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long t1, t2, r1, r2; scanf("%ld %ld %ld %ld", &t1, &t2, &r1, &r2);
        long check = t1 * t1 * r2 * r2 * r2 - t2 * t2 * r1 * r1 * r1;
        puts(check ? "No" : "Yes");
    }   

}
