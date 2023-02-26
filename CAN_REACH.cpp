#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, k; scanf("%ld %ld %ld", &x, &y, &k);
        puts( ((x % k == 0) && (y % k == 0)) ? "YES" : "NO");
    }

}
