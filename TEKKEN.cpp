#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        b -= c; if(b < 0){b = -b;}
        puts(b < a ? "YES" : "NO");
    }

}
