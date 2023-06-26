#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long s(a + b);
        puts((s == 2 || s == 3 || s == 5 || s == 7 || s == 11) ? "Alice " : "Bob");
    }

}
