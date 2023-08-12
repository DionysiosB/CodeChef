#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        puts((a + b >= 70 && b + c >= 70 && c + a >= 70) ? "Pass" : "Fail");
    }   

}
