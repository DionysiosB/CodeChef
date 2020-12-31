#include <cstdio>
 
int main() {

    unsigned long long tc; scanf("%lld", &tc);
    for(x = 0; x < tc; x++) {
        unsigned long long x, c, d, l, totallegs, remaincats;
        scanf("%lld %lld %lld", &c, &d, &l);
        totallegs = (c * 4) + (d * 4);
        if(l % 4 == 0) {
            remaincats = (totallegs - l) / 4;
            if((remaincats <= c) && (remaincats <= (d * 2))) {puts("yes"); continue;}
        }
        puts("no");
    }
    return 0;
}
 
