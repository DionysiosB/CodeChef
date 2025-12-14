#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        bool res = (a >= 2) && (b >= 2) && (a % 2 + b % 2 < 2);
        puts(res ? "Yes" : "No");
    }

}
