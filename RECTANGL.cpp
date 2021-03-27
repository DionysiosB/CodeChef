#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        bool res(false);
        if(a == b && c == d){res = true;}
        if(a == c && b == d){res = true;}
        if(a == d && b == c){res = true;}
        puts(res ? "YES" : "NO");
    }

    return 0;
}
