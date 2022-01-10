#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long h, w; scanf("%ld %ld", &h, &w);
        while(h > 0 && w > 0){h -= w; w /= 2;}
        puts(w < h ? "0" : "1");
    }
}
