#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        puts((x > y + z || y > x + z || z > x + y) ? "Yes" : "No");
    }

}
