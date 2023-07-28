#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        long diff = 100 * x - 10 * y;
        puts(diff >= 0 ? "Cloth" : "Disposable");
    }   

}
