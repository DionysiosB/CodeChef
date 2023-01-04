#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long ga, sa, ba, gb, sb, bb; scanf("%ld %ld %ld %ld %ld %ld", &ga, &sa, &ba, &gb, &sb, &bb);
        ga += sa + ba; gb += sb + bb;
        puts(ga > gb ? "1" : "2");
    }

}
