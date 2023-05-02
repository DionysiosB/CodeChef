#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n); long mx(-2e9 - 7);
    for(long p = 0; p < n; p++){
        scanf("%ld", &a[p]);
        mx = (mx > a[p]) ? mx : a[p];
    }
    if(k > 0 && k % 2){k %= 2;}
    else if(k > 0){k = 2;}

    for(long u = 0; u < k; u++){
        long nmx(-2e9-7);
        for(long p = 0; p < n; p++){
            a[p] = mx - a[p];
            nmx = (nmx > a[p]) ? nmx : a[p];
        }

        mx = nmx;
    }


    for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
    puts("");
}
