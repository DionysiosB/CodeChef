#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        puts(x <= 50 ? "LEFT" : "RIGHT");
    }   

}
