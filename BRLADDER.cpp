#include <cstdio>

int main(){

    int q; scanf("%d", &q);
    while(q--){
        long a, b; scanf("%ld %ld", &a, &b);
        if(a > b){long t = a; a = b; b = t;}
        puts((((a % 2) && (b - a <= 2)) || ((a % 2 == 0) && (b == a + 2))) ? "YES" : "NO");
    }

    return 0;
}
