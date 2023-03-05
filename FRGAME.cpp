#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        if(a < b){a += c;}
        else{b += c;}

        if(a < b){a += d;}
        else{b += d;}

        puts(a < b ? "S" : "N");
    }

}
