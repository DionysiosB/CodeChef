#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a; scanf("%ld", &a);
        puts( ((a >= 60) && ((360 % (180 - a)) == 0)) ? "YES" : "NO");
    }

    return 0;
}
