#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long xa, xb, Xa, Xb; scanf("%ld %ld %ld %ld", &xa, &xb, &Xa, &Xb);
        printf("%ld\n", Xa / xa + Xb / xb);
    }

}
