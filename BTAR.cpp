#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(4);
        while(n--){long x; scanf("%ld", &x); ++a[x % 4];}
        long cnt(0); bool possible(true);
        cnt += (a[1] < a[3]) ? a[1] : a[3];
        a[1] -= cnt; a[3] -= cnt;
        cnt += a[2] / 2; a[2] %= 2;
        if(a[2] && a[1] >= 2){cnt += 2; a[2] = 0; a[1] -= 2;}
        cnt += 3 * (a[1] / 4); a[1] %= 4;
        if(a[1] || a[2] || a[3]){puts("-1");}
        else{printf("%ld\n", cnt);}
    }

    return 0;
}
