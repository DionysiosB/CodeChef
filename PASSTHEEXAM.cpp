#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        puts((a >= 10 && b >= 10 && c >= 10 && a + b + c >= 100) ? "PASS" : "FAIL");
    }   

}
