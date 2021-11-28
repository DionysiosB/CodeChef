#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long y; scanf("%ld", &y);
        bool res = (y == 2010 || y == 2015 || y == 2016 || y == 2017 || y == 2019);
        puts(res ? "HOSTED" : "NOT HOSTED");
    }

    return 0;
}
