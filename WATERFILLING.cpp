#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        int a, b, c; scanf("%d %d %d", &a, &b, &c);
        puts(a + b + c < 2 ? "Water filling time" : "Not now");
    }

}
