#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        if(x % 2){puts("NO");}
        else if(x == 0){puts(y % 2 ? "NO" : "YES");}
        else{puts("YES");}
    }

}
