#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        long res = (x + y + z == 0 || x + y - z == 0 || x - y + z == 0 || x - y - z == 0 || -x + y + z == 0 || -x + y - z == 0 || -x - y + z == 0 || -x - y - z == 0);
        puts(res ? "yes" : "no");
    }
    
    return 0;
}
