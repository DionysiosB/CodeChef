#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        int a, b, c, d; scanf("%d %d %d %d", &a, &b, &c, &d);
        puts((a + b + c + d == 0) ? "IN" : "OUT");
    }   

}
