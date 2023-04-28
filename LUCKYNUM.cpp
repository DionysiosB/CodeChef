#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        puts( ((a == 7) || (b == 7) || (c == 7)) ? "YES" : "NO");
    }

}
